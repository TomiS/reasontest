/*
 type stop = {
   gtfsId: string,
   name: string,
   lat: option(float),
   lon: option(float),
 };
 */

module GetStops = [%graphql
  {|
    query getAllStops {
      stops {
        gtfsId
        name
        lat
        lon
      }
    }
  |}
];

module GetStopsQuery = ReasonApollo.CreateQuery(GetStops);

/* State declaration */
type state = {
  count: int,
  show: bool,
  greeting: string,
};

/* Action declaration */
type action =
  | ButtonClick
  | InputChange(string)
  | Toggle;

/* Component template declaration.
   Needs to be **after** state and action declarations! */
let component = ReasonReact.reducerComponent("Example");

/* greeting and children are props. `children` isn't used, therefore ignored.
   We ignore it by prepending it with an underscore */
let make = _children => {
  /* spread the other default fields of component here and override a few */
  ...component,
  initialState: () => {count: 4, show: true, greeting: ""},
  /* State transitions */
  reducer: (action, state) =>
    switch (action) {
    | ButtonClick => ReasonReact.Update({...state, count: state.count + 1})
    | InputChange(greeting) => ReasonReact.Update({...state, greeting})
    | Toggle => ReasonReact.Update({...state, show: !state.show})
    },
  render: self => {
    let getStopsQuery = GetStops.make();
    <div>
      <GetStopsQuery variables=getStopsQuery##variables>
        ...{
             ({result}) =>
               switch (result) {
               | Loading => <div> {ReasonReact.string("Loading")} </div>
               | Error(error) =>
                 <div> {ReasonReact.string(error##message)} </div>
               | Data(response) =>
                 Js.log(response##stops);
                 <ul className="list" />;
               }
           }
      </GetStopsQuery>
      <input
        value={self.state.greeting}
        onChange={
          event =>
            self.send(InputChange(ReactEvent.Form.target(event)##value))
        }
      />
      <button onClick={_event => self.send(Toggle)}>
        {ReasonReact.string("Toggle greeting")}
      </button>
      {
        self.state.show ?
          ReasonReact.string(self.state.greeting) : ReasonReact.null
      }
    </div>;
  },
};