/* This is the basic component. */
let component = ReasonReact.statelessComponent("Page");

let make = _children => {
  ...component,
  render: self => <PersonalInformation name="Khoa Nguyen" age=?(Some(24)) />,
};
/* [@bs.module]
   external myJSReactClass : ReasonReact.reactClass = "./myJSReactClass";

   let make = (~name: string, ~age: option(int)=?, children) =>
     ReasonReact.wrapJsForReason(
       ~reactClass=myJSReactClass,
       ~props={"name": name, "age": Js.Nullable.from_opt(age)},
       children,
     ); */