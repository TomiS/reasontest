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

export opaque type AnyStyleDefault = mixed;

export const Default: AnyStyleDefault = 0;

export opaque type AnyStylePrimary = mixed;

export const Primary: AnyStylePrimary = 1;

export opaque type AnyStyleSuccess = mixed;

export const Success: AnyStyleSuccess = 2;

export opaque type AnyStyleWarning = mixed;

export const Warning: AnyStyleWarning = 3;

export opaque type AnyStyleDanger = mixed;

export const Danger: AnyStyleDanger = 4;

export opaque type AnyStyleInverse = mixed;

export const Inverse: AnyStyleInverse = 5;

export opaque type AnyStyleMinimal = mixed;

export const Minimal: AnyStyleMinimal = 6;

export opaque type AnyStyleLink = mixed;

export const Link: AnyStyleLink = 7;

export type anyStyle =
  | AnyStyleDefault
  | AnyStylePrimary
  | AnyStyleSuccess
  | AnyStyleWarning
  | AnyStyleDanger
  | AnyStyleInverse
  | AnyStyleMinimal
  | AnyStyleLink;

export type Props = {|
  +onClick: (ReactEvent_Mouse_t) => void, 
  +disabled?: boolean, 
  +caret?: boolean, 
  +bsStyle?: anyStyle, 
  +children?: Array<ReasonReact_reactElement>
|};

export const component: React$ComponentType<Props> = ReasonReact.wrapReasonForJs(
  ButtonBS.component,
  (function _(jsProps: Props) {
     return Curry._5(ButtonBS.make, jsProps.onClick, jsProps.disabled, jsProps.caret, jsProps.bsStyle, jsProps.children);
  }));

export default component;
