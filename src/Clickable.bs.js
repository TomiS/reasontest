// Generated by BUCKLESCRIPT VERSION 4.0.7000, PLEASE EDIT WITH CARE

import * as Cn from "/home/tomis/Documents/Git/reasontest/node_modules/re-classnames/src/Cn.bs.js";
import * as Curry from "bsb-native/lib/es6/curry.js";
import * as Emotion from "/home/tomis/Documents/Git/reasontest/node_modules/bs-emotion/src/Emotion.bs.js";
import * as ReactDOMRe from "/home/tomis/Documents/Git/reasontest/node_modules/reason-react/src/ReactDOMRe.js";
import * as ReasonReact from "/home/tomis/Documents/Git/reasontest/node_modules/reason-react/src/ReasonReact.js";

var component = ReasonReact.statelessComponent("Clickable");

function button(disabled) {
  return Emotion.css(undefined, /* :: */[
              Emotion.label("button"),
              /* :: */[
                Emotion.cursor(disabled ? /* notAllowed */939907157 : /* pointer */-786317123),
                /* [] */0
              ]
            ]);
}

var Styles = /* module */[/* button */button];

function make(onClick, $staropt$star, className, _children) {
  var disabled = $staropt$star !== undefined ? $staropt$star : false;
  var onButtonClick = function ($$event, self) {
    if (onClick !== undefined) {
      Curry._1(onClick, $$event);
    }
    console.log(self);
    return /* () */0;
  };
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
              return ReactDOMRe.createElementVariadic("button", {
                          className: Cn.make(/* :: */[
                                button(disabled),
                                /* :: */[
                                  className,
                                  /* [] */0
                                ]
                              ]),
                          onClick: Curry._1(self[/* handle */0], onButtonClick)
                        }, _children);
            }),
          /* initialState */component[/* initialState */10],
          /* retainedProps */component[/* retainedProps */11],
          /* reducer */component[/* reducer */12],
          /* jsElementWrapped */component[/* jsElementWrapped */13]
        ];
}

export {
  component ,
  Styles ,
  make ,
  
}
/* component Not a pure module */
