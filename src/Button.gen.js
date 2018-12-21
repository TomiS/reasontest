/** 
 * @flow strict
 * @generated
 * @nolint
 */

// $FlowExpectedError: Reason checked type sufficiently
import * as ButtonBS from './Button.bs';

// $FlowExpectedError: Reason checked type sufficiently
import * as CreateBucklescriptBlock from 'bs-platform/lib/es6/block.js';

// $FlowExpectedError: Reason checked type sufficiently
import * as Curry from 'bs-platform/lib/es6/curry.js';

// $FlowExpectedError: Reason checked type sufficiently
import * as ReasonReact from 'reason-react/src/ReasonReact.js';

// flowlint-next-line nonstrict-import:off
import type {Mouse_t as ReactEvent_Mouse_t} from './ReactEvent.shim';

// flowlint-next-line nonstrict-import:off
import type {reactElement as ReasonReact_reactElement} from './ReactShim.shim';

export opaque type BsStyleDefault = mixed;

export const Default: BsStyleDefault = 0;

export opaque type BsStylePrimary = mixed;

export const Primary: BsStylePrimary = 1;

export opaque type BsStyleSuccess = mixed;

export const Success: BsStyleSuccess = 2;

export opaque type BsStyleWarning = mixed;

export const Warning: BsStyleWarning = 3;

export opaque type BsStyleDanger = mixed;

export const Danger: BsStyleDanger = 4;

export opaque type BsStyleInverse = mixed;

export const Inverse: BsStyleInverse = 5;

export opaque type BsStyleMinimal = mixed;

export const Minimal: BsStyleMinimal = 6;

export opaque type BsStyleLink = mixed;

export const Link: BsStyleLink = 7;

export type bsStyle =
  | BsStyleDefault
  | BsStylePrimary
  | BsStyleSuccess
  | BsStyleWarning
  | BsStyleDanger
  | BsStyleInverse
  | BsStyleMinimal
  | BsStyleLink;

export type Props = {|
  +onClick: (ReactEvent_Mouse_t) => void, 
  +disabled?: boolean, 
  +caret?: boolean, 
  +bsStyle?: bsStyle, 
  +children?: Array<ReasonReact_reactElement>
|};

export const component: React$ComponentType<Props> = ReasonReact.wrapReasonForJs(
  ButtonBS.component,
  (function _(jsProps: Props) {
     return Curry._5(ButtonBS.make, jsProps.onClick, jsProps.disabled, jsProps.caret, jsProps.bsStyle, jsProps.children);
  }));

export default component;
