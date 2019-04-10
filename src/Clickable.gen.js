/** 
 * @flow strict
 * @generated
 * @nolint
 */
/* eslint-disable */

// $FlowExpectedError: Reason checked type sufficiently
import * as Curry from 'bs-platform/lib/es6/curry.js';

// $FlowExpectedError: Reason checked type sufficiently
import * as ClickableBS from './Clickable.bs';

// $FlowExpectedError: Reason checked type sufficiently
import * as ReasonReact from 'reason-react/src/ReasonReact.js';

// flowlint-next-line nonstrict-import:off
import type {Mouse_t as ReactEvent_Mouse_t} from './ReactEvent.shim';

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
  +className: string, 
  +children?: Array<ReasonReact_reactElement>
|};

export const component: React$ComponentType<Props> = ReasonReact.wrapReasonForJs(
  ClickableBS.component,
  (function _(jsProps: Props) {
     return Curry._4(ClickableBS.make, jsProps.onClick, jsProps.disabled, jsProps.className, jsProps.children);
  }));

export default component;
