/** 
 * @flow strict
 * @generated
 * @nolint
 */

const $$toRE274034055 = {"default": 465819841, "primary": 58474434, "success": 944645571, "warning": 164354652, "danger": 512905955, "inverse": 1039223728, "minimal": -873810847, "link": -944564230};

// $FlowExpectedError: Reason checked type sufficiently
import * as Curry from 'bs-platform/lib/es6/curry.js';

// $FlowExpectedError: Reason checked type sufficiently
import * as IconBS from './Icon.bs';

// $FlowExpectedError: Reason checked type sufficiently
import * as ReasonReact from 'reason-react/src/ReasonReact.js';

export type bsStyle = "default" | "primary" | "success" | "warning" | "danger" | "inverse" | "minimal" | "link";

export type Props = {|
  +onClick: mixed, 
  +disabled?: boolean, 
  +caret?: boolean, 
  +bsStyle?: bsStyle, 
  +children?: mixed
|};

export const component: React$ComponentType<Props> = ReasonReact.wrapReasonForJs(
  IconBS.component,
  (function _(jsProps: Props) {
     return Curry._5(IconBS.make, jsProps.onClick, jsProps.disabled, jsProps.caret, $$toRE274034055[jsProps.bsStyle], jsProps.children);
  }));

export default component;
