// @flow
import * as React from 'react';
import Button from './Button.gen';

type Props = {
  hide?: boolean,
};

class ReactJsComponent extends React.PureComponent<Props> {
  render() {
    if (this.props.hide) {
      return null;
    }
    return (
      <Button bsStyle='danger'>Button from JS Component</Button>
    );
  }
}
export default ReactJsComponent;