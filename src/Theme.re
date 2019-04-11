// open Emotion;

type color = [ | `primary | `onPrimary];

let getColor = (~color) => {
  switch (color) {
  | `text => `hex("212121") /* almost black */
  | `primary => `hex("004400") /* dark green */
  | `onPrimary => `hex("ffffff")
  | `gray10 => `hex("212121")
  | `gray50 => `hex("777777")
  | `gray90 => `hex("f0f0f0")
  };
};