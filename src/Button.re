type bsStyle = [
  | `default
  | `primary
  | `success
  | `warning
  | `danger
  | `inverse
  | `minimal
  | `link
];

type bsSize = [ | `normal | `small | `xs];

let component = ReasonReact.statelessComponent("Button");

module Styles = {
  /* Open the Css module, so we can access the style properties below without prefixing them with Css. */
  open Css;

  let getBackgroundColor = (~bsStyle) =>
    switch (bsStyle) {
    | `default => gray
    | `primary => green
    | `success => green
    | `warning => yellow
    | `danger => red
    | `inverse => white
    | `minimal => white
    | `link => white
    };

  let button = (~disabled, ~bsStyle) =>
    style([
      position(relative),
      display(inlineBlock),
      boxShadow(~y=px(1), ~inset=true, rgba(255, 255, 255, 0.1)),
      borderWidth(px(1)),
      marginBottom(zero),
      borderColor(green),
      borderBottomColor(red),
      backgroundColor(getBackgroundColor(bsStyle)),
      textAlign(center),
      verticalAlign(middle),
      cursor(disabled ? `notAllowed : `pointer),
      backgroundImage(none),
      borderStyle(solid),
      whiteSpace(nowrap),
    ]);
};

[@genType]
let make =
    (
      ~onClick=?,
      ~disabled=false,
      ~caret=false,
      ~icon=?,
      ~bsStyle: bsStyle=`default,
      _children,
    ) => {
  let onButtonClick = (event, self) => {
    switch (onClick) {
    | None => ()
    | Some(onClick) => onClick(event)
    };
    Js.log(self);
  };
  let iconEl = _ =>
    switch (icon) {
    | None => ReasonReact.null
    | Some(icon) => <Icon iconType=icon />
    };
  {
    ...component,

    render: self =>
      <button
        onClick={self.handle(onButtonClick)}
        className={Styles.button(~disabled, ~bsStyle)}>
        {iconEl(self)}
        <span> ..._children </span>
        {caret ? <span className="caret" /> : ReasonReact.null}
      </button>,
  };
};