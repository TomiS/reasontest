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
let component = ReasonReact.reducerComponent("App");

/* greeting and children are props. `children` isn't used, therefore ignored.
   We ignore it by prepending it with an underscore */
[@genType]
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
    <div>
      <ReactJsComponent hide=false />
      {self.state.show
         ? ReasonReact.string(self.state.greeting) : ReasonReact.null}
      <input
        value={self.state.greeting}
        onChange={event =>
          self.send(InputChange(ReactEvent.Form.target(event)##value))
        }
      />
      <Button icon=`help> {ReasonReact.string("Help Button")} </Button>
      <Button
        onClick={_event => self.send(Toggle)} variant=`warning icon=`warning>
        {ReasonReact.string("Warning Button")}
      </Button>
      <Button
        icon=`success
        onClick={_event => self.send(Toggle)}
        disabled=true
        variant=`success>
        {ReasonReact.string("Success Button")}
      </Button>
      <Button variant=`danger icon=`danger>
        {ReasonReact.string("Danger Button")}
      </Button>
    </div>;
  },
};