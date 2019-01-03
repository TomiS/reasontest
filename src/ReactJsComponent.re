[@genType.import "./ReactJsComponent"] /* Module with the JS component to be wrapped. */
[@bs.module "./ReactJsComponent.gen"] /* Always the name of the current file plus ".gen". */
/* The make function will be automatically generated from the types below. */
external make:
  (~hide: bool, 'a) =>
  ReasonReact.component(
    ReasonReact.stateless,
    ReasonReact.noRetainedProps,
    ReasonReact.actionless,
  ) =
  "";