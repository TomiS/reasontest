type bsSize = [ | `normal | `small | `xs];

let component = ReasonReact.statelessComponent("Icon");

module Styles = {
  open Css;
  let svg = (~disabled, ~bsSize) =>
    style([
      width(px(20)),
      height(px(20)),
      position(relative),
      display(inlineBlock),
      marginBottom(zero),
      textAlign(center),
      verticalAlign(textTop),
      whiteSpace(nowrap),
    ]);
};
[@genType]
let make =
    (
      ~iconType: Icons.iconType,
      ~disabled=false,
      ~bsSize: bsSize=`normal,
      _children,
    ) => {
  ...component,

  render: _ =>
    <svg
      xmlns="http://www.w3.org/2000/svg"
      viewBox="0 0 1024 1024"
      className={Styles.svg(~disabled, ~bsSize)}>
      <path d={Icons.getIconPath(iconType)} />
    </svg>,
};