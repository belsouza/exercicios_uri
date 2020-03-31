let consumo x y = 
  (float_of_int x) /. y;;

let x = read_int();;
let y = read_float();;
let foo = consumo x y;;
Printf.printf "%.3f km/l\n" foo;;

