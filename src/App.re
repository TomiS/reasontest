[@genType]
[@react.component]
let make = _ => {
  <div>

      <br />
      <br />
      <Button icon=`help> {ReasonReact.string("Default Button")} </Button>
      <Button variant=`primary>
        {ReasonReact.string("Primary Button")}
      </Button>
      <Button icon=`success disabled=true variant=`success>
        {ReasonReact.string("Success Button")}
      </Button>
      <Button variant=`warning icon=`warning>
        {ReasonReact.string("Warning Button")}
      </Button>
      <Button variant=`danger icon=`danger>
        {ReasonReact.string("Danger Button")}
      </Button>
      <Button variant=`inverse>
        {ReasonReact.string("Inverse Button")}
      </Button>
      <Button variant=`minimal>
        {ReasonReact.string("Minimal Button")}
      </Button>
      <Button variant=`link> {ReasonReact.string("Link Button")} </Button>
    </div>;
    /*
     <ReactJsComponent hide=false />
     */
};