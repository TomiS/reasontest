/** 
 * @flow strict
 * @generated
 * @nolint
 */
/* eslint-disable */
// $FlowExpectedError: Reason checked type sufficiently
type $any = any;

// flowlint-next-line nonstrict-import:off
import ReactJsComponent from './ReactJsComponent';

// $FlowExpectedError: Reason checked type sufficiently
import * as React from 'react';

// $FlowExpectedError: Reason checked type sufficiently
import * as ReasonReact from 'reason-react/src/ReasonReact.js';

export type Props = {| +hide: boolean |};

// In case of type error, check the type of 'make' in 'ReactJsComponent.re' and the props of './ReactJsComponent'.
export function ReactJsComponentTypeChecked(props: Props) {
  return <ReactJsComponent {...props}/>;
}

// Export 'make' early to allow circular import from the '.bs.js' file.
export const make: mixed = function (hide: $any, children: $any) { return ReasonReact.wrapJsForReason(ReactJsComponent, {hide: hide}, children); };
