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

let component = ReasonReact.statelessComponent("Button");

module Styles = {
  /* Open the Css module, so we can access the style properties below without prefixing them with Css. */
  open Emotion;

  let getBackgroundColor = (~variant) =>
    switch (variant) {
    | `default => `hex("777777")
    | `primary => `hex("008800")
    | `success => `hex("008800")
    | `warning => `hex("008888")
    | `danger => `hex("880000")
    | `inverse => `hex("ffffff")
    | `minimal => `hex("ffffff")
    | `link => `hex("ffffff")
    };

  let button = (~disabled, ~variant) => [%css
    [
      position(`relative),
      display(`inlineBlock),
      boxShadow(~y=`px(1), ~inset=true, rgba(255, 255, 255, 0.1)),
      borderWidth(px(1)),
      marginBottom(`zero),
      /* borderColor("green"), */
      /* borderBottomColor("red"), */
      backgroundColor(getBackgroundColor(variant)),
      textAlign(`center),
      verticalAlign(`middle),
      cursor(disabled ? `notAllowed : `pointer),
      backgroundImage(`none),
      borderStyle(`solid),
      whiteSpace(`nowrap),
    ]
  ];
};

[@genType]
let make =
    (
      ~onClick=?,
      ~disabled=false,
      ~caret=false,
      ~icon=?,
      ~variant: variant=`default,
      ~size: size=`medium,
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
    | Some(icon) => <Icon icon />
    };
  {
    ...component,

    render: self =>
      <Clickable
        onClick={self.handle(onButtonClick)}
        className={Styles.button(~disabled, ~variant)}>
        {iconEl(self)}
        <span> ..._children </span>
        {caret ? <span className="caret" /> : ReasonReact.null}
      </Clickable>,
  };
};