// Generated by BUCKLESCRIPT VERSION 5.0.1, PLEASE EDIT WITH CARE

import * as Block from "bs-platform/lib/es6/block.js";
import * as Curry from "bs-platform/lib/es6/curry.js";
import * as React from "react";
import * as ReasonReact from "reason-react/src/ReasonReact.js";
import * as Button$ReactTemplate from "./Button.bs.js";
import * as ReactJsComponent$ReactTemplate from "./ReactJsComponent.bs.js";

var component = ReasonReact.reducerComponent("App");

function make(_children) {
  return /* record */[
          /* debugName */component[/* debugName */0],
          /* reactClassInternal */component[/* reactClassInternal */1],
          /* handedOffState */component[/* handedOffState */2],
          /* willReceiveProps */component[/* willReceiveProps */3],
          /* didMount */component[/* didMount */4],
          /* didUpdate */component[/* didUpdate */5],
          /* willUnmount */component[/* willUnmount */6],
          /* willUpdate */component[/* willUpdate */7],
          /* shouldUpdate */component[/* shouldUpdate */8],
          /* render */(function (self) {
              return React.createElement("div", undefined, ReasonReact.element(undefined, undefined, ReactJsComponent$ReactTemplate.make(false, /* array */[])), React.createElement("br", undefined), React.createElement("br", undefined), ReasonReact.element(undefined, undefined, Button$ReactTemplate.make(undefined, undefined, undefined, /* help */-989121855, undefined, undefined, /* array */["Default Button"])), ReasonReact.element(undefined, undefined, Button$ReactTemplate.make(undefined, undefined, undefined, undefined, /* primary */58474434, undefined, /* array */["Primary Button"])), ReasonReact.element(undefined, undefined, Button$ReactTemplate.make((function (_event) {
                                    return Curry._1(self[/* send */3], /* Toggle */1);
                                  }), true, undefined, /* success */944645571, /* success */944645571, undefined, /* array */["Success Button"])), ReasonReact.element(undefined, undefined, Button$ReactTemplate.make((function (_event) {
                                    return Curry._1(self[/* send */3], /* Toggle */1);
                                  }), undefined, undefined, /* warning */164354652, /* warning */164354652, undefined, /* array */["Warning Button"])), ReasonReact.element(undefined, undefined, Button$ReactTemplate.make(undefined, undefined, undefined, /* danger */512905955, /* danger */512905955, undefined, /* array */["Danger Button"])), ReasonReact.element(undefined, undefined, Button$ReactTemplate.make(undefined, undefined, undefined, undefined, /* inverse */1039223728, undefined, /* array */["Inverse Button"])), ReasonReact.element(undefined, undefined, Button$ReactTemplate.make(undefined, undefined, undefined, undefined, /* minimal */-873810847, undefined, /* array */["Minimal Button"])), ReasonReact.element(undefined, undefined, Button$ReactTemplate.make(undefined, undefined, undefined, undefined, /* link */-944564230, undefined, /* array */["Link Button"])));
            }),
          /* initialState */(function (param) {
              return /* record */[
                      /* count */4,
                      /* show */true,
                      /* greeting */""
                    ];
            }),
          /* retainedProps */component[/* retainedProps */11],
          /* reducer */(function (action, state) {
              if (typeof action === "number") {
                if (action !== 0) {
                  return /* Update */Block.__(0, [/* record */[
                              /* count */state[/* count */0],
                              /* show */!state[/* show */1],
                              /* greeting */state[/* greeting */2]
                            ]]);
                } else {
                  return /* Update */Block.__(0, [/* record */[
                              /* count */state[/* count */0] + 1 | 0,
                              /* show */state[/* show */1],
                              /* greeting */state[/* greeting */2]
                            ]]);
                }
              } else {
                return /* Update */Block.__(0, [/* record */[
                            /* count */state[/* count */0],
                            /* show */state[/* show */1],
                            /* greeting */action[0]
                          ]]);
              }
            }),
          /* jsElementWrapped */component[/* jsElementWrapped */13]
        ];
}

export {
  component ,
  make ,
  
}
/* component Not a pure module */
