/** 
 * @flow strict
 * @generated
 * @nolint
 */
/* eslint-disable */
// $FlowExpectedError: Reason checked type sufficiently
type $any = any;

const $$toRE174527891 = {"help": -989121855, "success": 944645571, "info": -977586066, "warning": 164354652, "danger": 512905955};

const $$toRE930253789 = {"medium": -20425611, "small": -9768761, "large": -272944197, "xlarge": -359759805};

// $FlowExpectedError: Reason checked type sufficiently
import * as Curry from 'bs-platform/lib/es6/curry.js';

// $FlowExpectedError: Reason checked type sufficiently
import * as IconBS from './Icon.bs';

// $FlowExpectedError: Reason checked type sufficiently
import * as ReasonReact from 'reason-react/src/ReasonReact.js';

export type size = "medium" | "small" | "large" | "xlarge";

export type iconType = 
  | "help"
  | "success"
  | "info"
  | "warning"
  | "danger";

export const getIconPath: (iconType) => string = function (Arg1: $any) {
  const result = IconBS.getIconPath($$toRE174527891[Arg1]);
  return result
};

export type Props = {|
  +icon: iconType, 
  +disabled?: boolean, 
  +bsSize?: size, 
  +children?: mixed
|};

export const component: React$ComponentType<Props> = ReasonReact.wrapReasonForJs(
  IconBS.component,
  (function _(jsProps: Props) {
     return Curry._4(IconBS.make, $$toRE174527891[jsProps.icon], jsProps.disabled, (jsProps.bsSize == null ? undefined : $$toRE930253789[jsProps.bsSize]), jsProps.children);
  }));

export default component;
