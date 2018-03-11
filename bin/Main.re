/*
Some naming convensions here:
  - `ExampleLib` is the name provided in `src/jbuild`, under the `name` stanza;
     this can be ignored if adding `(wrapped false)` in `src/jbuild` file.
  - `Example01Lib` is made out from the name of the `src/Example01Lib.ml` file name.
  - `Example01` is the module name declared within the `src/Example01Lib.ml` file.
*/

open ExampleLib;

let () = {
  print_endline("Response: " ++ Example01Lib.Example01.thing);
};
