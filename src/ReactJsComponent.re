[@genType.import "./ReactJsComponent"];
type props;
[@react.component];
[@bs.module] external make: props => React.element = "./ReactJsComponent";