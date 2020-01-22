[@genType]
type size = [ | `medium | `small | `large];

module Styles = {
  open Css;
  /* Open the Css module, so we can access the style properties below without prefixing them with Css. */
  let getColor = (~variant, ~isHovering) => {
    switch (variant) {
    | `inverse
    | `success
    | `warning
    | `default => Theme.getColor(~color=`text)
    | `primary
    | `danger => hex("ffffff")
    | `minimal =>
      isHovering ? Theme.getColor(~color=`primary) : hex("777777")
    | `link => Theme.getColor(~color=`primary)
    };
  };

  let getPadding = (~isActive) => {
    isActive
      ? (px(7), px(12), px(5), px(12))
      : (px(6), px(12), px(6), px(12));
  };

  let getBackgroundColor = (~variant: Config.buttonType) =>
    switch (variant) {
    | `default => hex("777777")
    | `primary => hex("008800")
    | `success => hex("008800")
    | `warning => hex("008888")
    | `danger => hex("880000")
    | `inverse => hex("ffffff")
    | `minimal => hex("ffffff")
    | `link => hex("ffffff")
    };

  let iconInButtonOnHover = () =>
    style([selector("> svg > path", [SVG.fill(Css.white)])]);

  let getRoot = (~disabled: bool, ~variant: Config.buttonType) =>
    style([
      position(relative),
      display(inlineBlock),
      color(getColor(~variant, ~isHovering=false)),
      /* boxShadow(~y=`px(1), ~inset=true, rgba(255, 255, 255, 0.1)), */
      borderWidth(px(1)),
      marginBottom(zero),
      lineHeight(px(24)),
      padding4(~top=px(7), ~left=px(12), ~bottom=px(5), ~right=px(12)),
      backgroundColor(getBackgroundColor(~variant)),
      textAlign(center),
      verticalAlign(middle),
      cursor(disabled ? `notAllowed : `pointer),
      backgroundImage(none),
      borderStyle(solid),
      whiteSpace(nowrap),
      transition(~duration=500, "all"),
      selector(":hover", [backgroundColor(Css.gray)]),
      selector(":hover > svg > path", [SVG.fill(Css.white)]) // ugly, but life is :(
    ]);

  let iconInButton = (~size: size) => style([marginRight(`px(5))]);
};

[@genType]
[@react.component]
let make =
    (
      ~onClick=?,
      ~disabled: bool=false,
      ~caret=false,
      ~icon: option(Config.iconType)=?,
      ~variant: Config.buttonType=`default,
      ~size: size=`medium,
      ~children,
    ) => {
  let onButtonClick = event => {
    switch (onClick) {
    | None => ()
    | Some(onClick) => onClick(event)
    };
  };
  let iconClass = Styles.iconInButton(~size);
  let renderIcon = _ =>
    switch (icon) {
    | None => React.null
    | Some(i) => <Icon icon=i className=iconClass />
    };
  <Clickable
    onClick=onButtonClick className={Styles.getRoot(~disabled, ~variant)}>
    {renderIcon()}
    <span> children </span>
    {caret ? <span className="caret" /> : React.null}
  </Clickable>;
};