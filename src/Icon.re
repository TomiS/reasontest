[@genType]
type size = [ | `medium | `small | `large | `xlarge];

[@genType]
let getIconPath = (icon: Config.iconType): string => {
  switch (icon) {
  | `help => "M505.754 41.011c-260.147 3.482-468.224 217.19-464.742 477.338 3.482 259.994 217.19 468.122 477.338 464.64 260.045-3.482 468.173-217.19 464.64-477.338-3.43-260.045-217.139-468.122-477.235-464.64zM504.371 798.72h-2.611c-40.038-1.178-68.301-30.72-67.174-70.195 1.126-38.758 30.054-66.97 68.813-66.97l2.355 0.051c41.165 1.229 69.12 30.464 67.891 71.066-1.126 38.861-29.645 66.048-69.274 66.048zM672.87 464.282c-9.472 13.363-30.157 30.003-56.269 50.33l-28.774 19.866c-15.77 12.288-25.293 23.808-28.826 35.123-2.867 9.011-4.198 11.315-4.454 29.491l-0.051 4.659-109.722 0 0.307-9.318c1.331-38.195 2.304-60.621 18.125-79.206 24.832-29.133 79.616-64.41 81.92-65.894 7.834-5.939 14.438-12.646 19.405-19.814 11.52-15.872 16.589-28.416 16.589-40.653 0-17.050-5.069-32.819-15.053-46.848-9.626-13.568-27.904-20.429-54.323-20.429-26.214 0-44.134 8.346-54.886 25.395-11.11 17.562-16.64 35.942-16.64 54.784v4.71h-113.152l0.205-4.915c2.918-69.325 27.648-119.194 73.523-148.326 28.774-18.586 64.614-27.955 106.394-27.955 54.733 0 101.018 13.312 137.37 39.526 36.864 26.573 55.552 66.406 55.552 118.323 0 29.082-9.165 56.371-27.238 81.152z"
  | `success => "M512 20.48c-271.462 0-491.52 220.058-491.52 491.52s220.058 491.52 491.52 491.52c271.411 0 491.52-220.058 491.52-491.571 0-271.411-220.109-491.469-491.52-491.469zM512 901.069c-214.886 0-389.12-174.182-389.12-389.12s174.182-389.069 389.12-389.069c214.886 0 389.171 174.182 389.171 389.12s-174.285 389.069-389.171 389.069zM384.051 499.2c42.394 0 76.749-40.090 76.749-89.6s-34.406-89.6-76.8-89.6-76.8 40.090-76.8 89.6 34.406 89.6 76.851 89.6zM640 499.2c42.445 0 76.8-40.090 76.8-89.6s-34.406-89.6-76.8-89.6-76.8 40.141-76.8 89.6 34.406 89.6 76.8 89.6zM734.259 580.403c-18.586-9.523-41.728-2.202-51.61 16.384-1.741 3.379-44.493 81.562-170.598 81.562-125.491 0-168.499-77.466-170.65-81.51-9.626-18.688-32.358-26.317-51.405-16.845-18.944 9.523-26.624 32.563-17.152 51.558 2.56 5.069 63.898 123.597 239.206 123.597 175.36 0 236.595-118.579 239.104-123.648 9.421-18.79 1.843-41.472-16.896-51.098z"
  | `info => "M505.702 41.011c-260.096 3.482-468.173 217.19-464.691 477.338 3.482 259.994 217.19 468.122 477.286 464.64 260.096-3.482 468.173-217.19 464.691-477.338-3.43-260.045-217.19-468.122-477.286-464.64zM557.926 197.99c47.872 0 62.003 27.75 62.003 59.546 0 39.68-31.795 76.39-86.016 76.39-45.363 0-66.918-22.835-65.638-60.518 0-31.795 26.624-75.418 89.651-75.418zM435.149 806.4c-32.717 0-56.678-19.866-33.792-107.213l37.53-154.829c6.502-24.832 7.578-34.765 0-34.765-9.779 0-52.275 17.152-77.414 34.048l-16.333-26.778c79.616-66.458 171.162-105.472 210.381-105.472 32.717 0 38.144 38.707 21.811 98.253l-43.008 162.816c-7.578 28.774-4.301 38.707 3.277 38.707 9.779 0 41.984-11.878 73.626-36.762l18.483 24.832c-77.363 77.363-161.792 107.162-194.56 107.162z"
  | `warning => "M999.014 920.678l-456.090-800.307c-6.298-11.059-18.125-17.869-30.925-17.869-12.8 0-24.576 6.81-30.925 17.869l-456.038 800.307c-6.195 10.854-6.093 24.115 0.256 34.867s18.022 17.357 30.618 17.357h912.128c12.493 0 24.218-6.605 30.618-17.357 6.349-10.752 6.451-24.013 0.358-34.867zM568.32 870.502h-112.64v-102.4h112.64v102.4zM568.32 691.302h-112.64v-307.2h112.64v307.2z"
  | `danger => "M956.928 632.115l-88.422-78.848c-25.6-22.835-25.6-60.109 0-82.944l88.422-78.797c25.6-22.835 18.739-44.083-15.206-47.309l-117.197-11.11c-33.946-3.226-52.224-32.41-40.55-64.87l62.208-173.158c11.674-32.461-2.611-44.288-31.693-26.266l-138.291 85.504c-29.082 18.022-66.662 8.192-83.507-21.862l-50.125-89.395c-16.794-30.054-44.646-30.208-61.798-0.358l-46.541 80.998c-17.152 29.85-56.576 42.598-87.603 28.314l-81.92-37.632c-31.078-14.234-54.938 2.253-53.094 36.762l4.454 82.688c1.843 34.458-23.603 69.99-56.525 78.848l-79.104 21.248c-32.922 8.909-38.963 34.816-13.363 57.651l88.422 78.797c25.6 22.784 25.6 60.109 0 82.893l-88.422 78.746c-25.6 22.886-18.842 44.902 15.002 48.998l107.264 13.005c33.843 4.198 52.736 34.406 41.933 67.123l-55.040 166.81c-10.803 32.819 4.608 45.619 34.202 28.416l126.106-72.909c29.645-17.203 69.427-7.68 88.474 20.89l52.378 78.694c18.995 28.723 47.616 27.085 63.437-3.482l46.029-88.678c15.923-30.618 53.914-43.11 84.429-27.802l88.781 44.39c30.618 15.309 54.118-0.41 52.275-34.918l-4.454-82.688c-1.843-34.509 23.603-69.99 56.525-78.899l79.053-21.197c33.024-8.96 39.066-34.867 13.466-57.651zM563.2 726.784h-102.4v-107.52h102.4v107.52zM563.2 562.995h-102.4v-266.24h102.4v266.24z"
  };
};

let getIconSize = (size: size) => {
  switch (size) {
  | `small => Css.px(18)
  | `medium => Css.px(20)
  | `large => Css.px(36)
  | `xlarge => Css.px(48)
  };
};

module Styles = {
  open Css;
  let getRoot = (~disabled, ~size) =>
    style([
      label("Icon"),
      width(getIconSize(size)),
      height(getIconSize(size)),
      position(Css.relative),
      /* display(`inlineBlock), */
      marginBottom(Css.zero),
      textAlign(Css.center),
      verticalAlign(`top),
      whiteSpace(`nowrap),
    ]);
};
[@genType]
[@react.component]
let make =
    (
      ~icon: Config.iconType,
      ~disabled=false,
      ~size: size=`medium,
      ~className: string=?,
    ) => {
  <svg
    xmlns="http://www.w3.org/2000/svg"
    viewBox="0 0 1024 1024"
    className={Css.merge([Styles.getRoot(~disabled, ~size), className])}>
    <path d={getIconPath(icon)} />
  </svg>;
};