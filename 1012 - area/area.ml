let areadotrianguloretangulo baseA alturaC = (baseA *. alturaC) /. 2.0;;

let areadocirculo raioC = 3.14159 *. raioC *. raioC;;

let areadotrapezio baseA baseB alturaC = ((baseA +. baseB) *. alturaC ) /. 2.0 ;;

let areadoquadrado ladoB = ladoB *. ladoB;;

let areadoretangulo ladoA ladoB = ladoA *. ladoB;;

let (a, b, c) =
    Scanf.scanf "%f  %f  %f\n" (fun a b c -> (a, b, c));;

Printf.printf "TRIANGULO: %.3f\n" ( areadotrianguloretangulo a c) ;;
Printf.printf "CIRCULO: %.3f\n" ( areadocirculo c );;
Printf.printf "TRAPEZIO: %.3f\n" ( areadotrapezio a b c );;
Printf.printf "QUADRADO: %.3f\n" ( areadoquadrado b );;
Printf.printf "RETANGULO: %.3f\n" ( areadoretangulo a b );;