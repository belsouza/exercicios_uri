var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

function maiordedois( a, b ){
    return ((a + b + Math.abs(a - b)) / 2 );
}

function maiordetres( a, b, c ){
    p1 = maiordedois(a, b);
    return maiordedois(p1, c);
}

var a, b, c, temp, maior;
temp = lines[0].split(" ");
a = parseInt( temp[0] );
b = parseInt( temp[1] );
c = parseInt( temp[2] );
maior = maiordetres(a, b, c);
console.log("%d eh o maior", maior);
