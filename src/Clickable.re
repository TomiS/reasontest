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

let component = ReasonReact.statelessComponent("Clickable");

module Styles = {
  /* Open the Css module, so we can access the style properties below without prefixing them with Css. */
  open Emotion;

  let button = (~disabled) => [%css
    [cursor(disabled ? `notAllowed : `pointer)]
  ];
};

[@genType]
let make = (~onClick=?, ~disabled=false, ~className, _children) => {
  let onButtonClick = (event, self) => {
    switch (onClick) {
    | None => ()
    | Some(onClick) => onClick(event)
    };
    Js.log(self);
  };
  {
    ...component,

    render: self =>
      <button
        onClick={self.handle(onButtonClick)}
        className={Cn.make([Styles.button(~disabled), className])}>
        ..._children
      </button>,
  };
};