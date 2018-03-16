import React from "react";

const PersonalInformation = props => {
  let hasAge = props.hasOwnProperty("age");

  if (hasAge) {
    return (
      <p>
        My name is {props.name}. I'm {props.age} years old
      </p>
    );
  }

  return <p>My name is {props.name}</p>;
};

export default PersonalInformation;
