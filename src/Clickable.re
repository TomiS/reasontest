[@genType]
type variant = [
  | `default
  | `primary
  | `success
  | `warning
  | `danger
  | `inverse
  | `minimal
  | `link
];

[@genType]
type size = [ | `medium | `small | `large];

module Styles = {
  /* Open the Css module, so we can access the style properties below without prefixing them with Css. */
  open Css;

  let getRoot = (~disabled) =>
    style([cursor(disabled ? `notAllowed : `pointer)]);
};

[@genType]
[@react.component]
let make = (~onClick=?, ~disabled=false, ~className: string=?, ~children) => {
  let onButtonClick = event => {
    switch (onClick) {
    | None => ()
    | Some(onClick) => onClick(event)
    };
  };
  <button onClick=onButtonClick className={Styles.getRoot(~disabled)}>
    children
  </button>;
};