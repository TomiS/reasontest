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
      <input
        value={self.state.greeting}
        onChange={event =>
          self.send(InputChange(ReactEvent.Form.target(event)##value))
        }
      />
      <Button onClick={_event => self.send(Toggle)} bsStyle=`warning>
        {ReasonReact.string("First Button")}
      </Button>
      <Button
        onClick={_event => self.send(Toggle)} disabled=true bsStyle=`warning>
        <div> {ReasonReact.string("Second Button")} </div>
      </Button>
      <ReactJsComponent hide=false />
      {self.state.show ?
         ReasonReact.string(self.state.greeting) : ReasonReact.null}
    </div>;
  },
};