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
let make =
    (~onClick=?, ~disabled=false, ~className: option(string)=?, ~children) => {
  let className = className->Belt.Option.getWithDefault("");
  let onButtonClick = event => {
    switch (onClick) {
    | None => ()
    | Some(onClick) => onClick(event)
    };
  };
  <button
    onClick=onButtonClick
    className={Css.merge([Styles.getRoot(~disabled), className])}>
    children
  </button>;
};
