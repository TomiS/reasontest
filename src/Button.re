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

  let getColor = (~variant, ~isHovering) => {
    switch (variant) {
    | `inverse
    | `success
    | `warning
    | `default => Theme.getColor(~color=`text)
    | `primary
    | `danger => `hex("ffffff")
    | `minimal =>
      isHovering ? Theme.getColor(~color=`primary) : `hex("777777")
    | `link => Theme.getColor(~color=`primary)
    };
  };

  let getPadding = (~isActive) => {
    isActive
      ? (`px(7), `px(12), `px(5), `px(12))
      : (`px(6), `px(12), `px(6), `px(12));
  };

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
      color(getColor(~variant, ~isHovering=false)),
      /* boxShadow(~y=`px(1), ~inset=true, rgba(255, 255, 255, 0.1)), */
      borderWidth(`px(1)),
      marginBottom(`zero),
      lineHeight(`px(24)),
      padding4(`px(7), `px(12), `px(5), `px(12)),
      /* active(padding(getPadding(~isActive=true))) */
      /* borderColor("green"), */
      /* borderBottomColor("red"), */
      backgroundColor(getBackgroundColor(~variant)),
      textAlign(`center),
      verticalAlign(`middle),
      cursor(disabled ? `notAllowed : `pointer),
      backgroundImage(`none),
      borderStyle(`solid),
      whiteSpace(`nowrap),
    ]
  ];

  let iconInButton = (~size) => [%css [marginRight(`px(5))]];
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
  let iconClass = Styles.iconInButton(~size);
  let iconEl = _ =>
    switch (icon) {
    | None => ReasonReact.null
    | Some(icon) => <Icon icon className=iconClass />
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