/** 
 * @flow strict
 * @generated
 * @nolint
 */
/* eslint-disable */

const $$toRE153033107 = {"default": 465819841, "primary": 58474434, "success": 944645571, "warning": 164354652, "danger": 512905955, "inverse": 1039223728, "minimal": -873810847, "link": -944564230};

const $$toRE174527891 = {"help": -989121855, "success": 944645571, "info": -977586066, "warning": 164354652, "danger": 512905955};

const $$toRE763896791 = {"medium": -20425611, "small": -9768761, "large": -272944197};

// $FlowExpectedError: Reason checked type sufficiently
import * as Curry from 'bs-platform/lib/es6/curry.js';

// $FlowExpectedError: Reason checked type sufficiently
import * as ButtonBS from './Button.bs';

// $FlowExpectedError: Reason checked type sufficiently
import * as ReasonReact from 'reason-react/src/ReasonReact.js';

// flowlint-next-line nonstrict-import:off
import type {Mouse_t as ReactEvent_Mouse_t} from './ReactEvent.shim';

// flowlint-next-line nonstrict-import:off
import type {icon as Icon_icon} from './Icon.gen';

// flowlint-next-line nonstrict-import:off
import type {reactElement as ReasonReact_reactElement} from './ReactShim.shim';

export type variant = 
  | "default"
  | "primary"
  | "success"
  | "warning"
  | "danger"
  | "inverse"
  | "minimal"
  | "link";

export type size = "medium" | "small" | "large";

export type Props = {|
  +onClick?: (ReactEvent_Mouse_t) => void, 
  +disabled?: boolean, 
  +caret?: boolean, 
  +icon?: Icon_icon, 
  +variant?: variant, 
  +size?: size, 
  +children?: Array<ReasonReact_reactElement>
|};

export const component: React$ComponentType<Props> = ReasonReact.wrapReasonForJs(
  ButtonBS.component,
  (function _(jsProps: Props) {
     return Curry._7(ButtonBS.make, jsProps.onClick, jsProps.disabled, jsProps.caret, (jsProps.icon == null ? undefined : $$toRE174527891[jsProps.icon]), (jsProps.variant == null ? undefined : $$toRE153033107[jsProps.variant]), (jsProps.size == null ? undefined : $$toRE763896791[jsProps.size]), jsProps.children);
  }));

export default component;
