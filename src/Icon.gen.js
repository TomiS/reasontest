/** 
 * @flow strict
 * @generated
 * @nolint
 */

const $$toRE145920046 = {"normal": 812216871, "small": -9768761, "xs": 26875};

// $FlowExpectedError: Reason checked type sufficiently
import * as Curry from 'bs-platform/lib/es6/curry.js';

// $FlowExpectedError: Reason checked type sufficiently
import * as IconBS from './Icon.bs';

// $FlowExpectedError: Reason checked type sufficiently
import * as ReasonReact from 'reason-react/src/ReasonReact.js';

// flowlint-next-line nonstrict-import:off
import type {Icons_iconType as ReactTemplate_Icons_iconType} from './ReactTemplate.gen';

export type bsSize = "normal" | "small" | "xs";

export type Props = {|
  +iconType: ReactTemplate_Icons_iconType, 
  +onClick?: mixed, 
  +disabled?: boolean, 
  +bsSize?: bsSize, 
  +children?: mixed
|};

export const component: React$ComponentType<Props> = ReasonReact.wrapReasonForJs(
  IconBS.component,
  (function _(jsProps: Props) {
     return Curry._5(IconBS.make, jsProps.iconType, jsProps.onClick, jsProps.disabled, $$toRE145920046[jsProps.bsSize], jsProps.children);
  }));

export default component;
