type bsStyle =
  | Default
  | Primary
  | Success
  | Warning
  | Danger
  | Inverse
  | Minimal
  | Link;

type anySize =
  | Normal
  | Small
  | Xs;

let component = ReasonReact.statelessComponent("Button");

module Styles = {
  /* Open the Css module, so we can access the style properties below without prefixing them with Css. */
  open Css;

  let getBackgroundColor = (~bsStyle) =>
    switch (bsStyle) {
    | Default => gray
    | Primary => green
    | Success => green
    | Warning => yellow
    | Danger => red
    | Inverse => white
    | Minimal => white
    | Link => white
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
      ~onClick,
      ~disabled=false,
      ~caret=false,
      /*
        ~icon=None,
        ~tall=false,
        ~hidden=false,
        ~bsSize: anySize=Normal,
       */
      ~bsStyle: bsStyle=Default,
      _children,
    ) => {
  ...component,
  render: _ =>
    <button onClick className={Styles.button(~disabled, ~bsStyle)}>
      <span> ..._children </span>
      {caret ? <span className="caret" /> : ReasonReact.null}
    </button>,
};