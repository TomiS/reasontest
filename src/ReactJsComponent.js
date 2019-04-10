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
        <Button variant='danger' icon='danger'>Danger Button from JS Component</Button>
        <Icon iconType='danger' />
        <Button variant='warning' icon='warning'>Warning Button from JS Component</Button>
        <Button variant='success' icon='success'>Success Button from JS Component</Button>
        <Button variant='default' icon='info'>Info Button from JS Component</Button>
      </React.Fragment>
    );
  }
}
export default ReactJsComponent;