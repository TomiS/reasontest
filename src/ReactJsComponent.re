/*
 [@bs.module]
 external reactJsClass: ReasonReact.reactClass = "./ReactJsComponent.bs";

 [@bs.deriving abstract]
 type jsProps = {hide: bool};

 let make = (~hide, children) =>
   ReasonReact.wrapJsForReason(
     ~reactClass=reactJsClass,
     ~props=jsProps(~hide),
     children,
   );
 */

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