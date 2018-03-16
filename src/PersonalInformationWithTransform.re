[@bs.module]
external jsPersonalInformation : ReasonReact.reactClass =
  "./PersonalInformation.js";

[@bs.obj]
external makeProps :
  (~name: string, ~age: int=?, ~showAge: Js.boolean=?, unit) => _ =
  "";

let make = (~name, ~age=?, ~showAge=?, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=jsPersonalInformation,
    ~props=
      makeProps(
        ~name,
        ~age?,
        ~showAge=?
          Js.Option.map((. a) => Js.Boolean.to_js_boolean(a), showAge),
        (),
      ),
    children,
  );