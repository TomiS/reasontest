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

let component = ReasonReact.statelessComponent("Icon");

module Styles = {
  /* Open the Css module, so we can access the style properties below without prefixing them with Css. */
  open Css;

  let button = (~disabled, ~bsStyle) =>
    style([
      position(relative),
      display(inlineBlock),
      boxShadow(~y=px(1), ~inset=true, rgba(255, 255, 255, 0.1)),
      borderWidth(px(1)),
      marginBottom(zero),
      borderColor(green),
      borderBottomColor(red),
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
      ~iconType: Icons.iconType,
      ~onClick=?,
      ~disabled=false,
      ~bsSize: bsSize=`normal,
      _children,
    ) => {
  ...component,

  render: _ =>
    <svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 1024 1024">
      <path d={Icons.getIconPath(iconType)} />
    </svg>,
};