// @flow
import * as React from 'react';
import Button from './Button.gen';
import Icon from './Icon.gen';

type Props = {
  hide?: boolean,
};

class ReactJsComponent extends React.PureComponent<Props> {
  render() {
    if (this.props.hide) {
      return null;
    }
    return (
      <React.Fragment>
        <Button bsStyle='danger' icon='danger'>Danger Button from JS Component</Button>
        <Icon iconType='danger' />
        <Button bsStyle='warning' icon='warning'>Danger Button from JS Component</Button>
        <Button bsStyle='success' icon='success'>Danger Button from JS Component</Button>
        <Button bsStyle='default' icon='info'>Danger Button from JS Component</Button>
      </React.Fragment>
    );
  }
}
export default ReactJsComponent;