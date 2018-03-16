/* PersonalInformation.re */
/* [@bs.module]
   external jsPersonalInformation : ReasonReact.reactClass =
     "./PersonalInformation.js"; */
/* let make = (~name: string, ~age: option(int)=?, children) =>
   ReasonReact.wrapJsForReason(
     ~reactClass=jsPersonalInformation,
     ~props={"name": name, "age": Js.Nullable.fromOption(age)},
     children,
   ); */
/* [@bs.module]
   external jsPersonalInformation : ReasonReact.reactClass =
     "./PersonalInformation.js"; */
[@bs.module "./PersonalInformation"]
external jsPersonalInformation : ReasonReact.reactClass = "default";

[@bs.obj] external makeProps : (~name: string, ~age: int=?, unit) => _ = "";

let make = (~name, ~age=?, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=jsPersonalInformation,
    ~props=makeProps(~name, ~age?, ()),
    children,
  );