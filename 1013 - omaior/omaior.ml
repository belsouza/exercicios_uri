let maiordedois a b =
    let g = abs(a - b) in
    (a + b + g) / 2;;

let maiordetres a b c =
  let p1 = maiordedois a b in
  maiordedois p1 c;;

let (a, b, c) = Scanf.scanf "%d %d %d\n" (fun a b c ->(a, b,c));;
let maior = maiordetres a b c;;
Printf.printf "%d eh o maior\n" maior;;