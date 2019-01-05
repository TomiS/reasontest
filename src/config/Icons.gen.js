/** 
 * @flow strict
 * @generated
 * @nolint
 */

const $$toRE111500574 = {"help": -989121855, "success": 944645571, "info": -977586066, "warning": 164354652, "danger": 512905955};

// $FlowExpectedError: Reason checked type sufficiently
import * as IconsBS from './Icons.bs';

export type iconType = "help" | "success" | "info" | "warning" | "danger";

export const getIconPath: (iconType) => string = function _(Arg1) { const result = IconsBS.getIconPath($$toRE111500574[Arg1]); return result };
