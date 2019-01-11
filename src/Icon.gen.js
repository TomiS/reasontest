/** 
 * @flow strict
 * @generated
 * @nolint
 */

const $$toRE174527891 = {"help": -989121855, "success": 944645571, "info": -977586066, "warning": 164354652, "danger": 512905955};

const $$toRE430912857 = {"normal": 812216871, "small": -9768761, "xs": 26875};

// $FlowExpectedError: Reason checked type sufficiently
import * as Curry from 'bs-platform/lib/es6/curry.js';

// $FlowExpectedError: Reason checked type sufficiently
import * as IconBS from './Icon.bs';

// $FlowExpectedError: Reason checked type sufficiently
import * as ReasonReact from 'reason-react/src/ReasonReact.js';

export type bsSize = "normal" | "small" | "xs";

export type iconType = "help" | "success" | "info" | "warning" | "danger";

export const getIconPath: (iconType) => string = function _(Arg1) { const result = IconBS.getIconPath($$toRE174527891[Arg1]); return result };

export type Props = {|
  +iconType: iconType, 
  +disabled?: boolean, 
  +bsSize?: bsSize, 
  +children?: mixed
|};

export const component: React$ComponentType<Props> = ReasonReact.wrapReasonForJs(
  IconBS.component,
  (function _(jsProps: Props) {
     return Curry._4(IconBS.make, $$toRE174527891[jsProps.iconType], jsProps.disabled, $$toRE430912857[jsProps.bsSize], jsProps.children);
  }));

export default component;
