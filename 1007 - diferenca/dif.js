var input = require('fs').readFileSync('stdin.txt', 'utf8');
//var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

function diferenca( a, b, c, d ){
    return ((a * b) - (c * d));
}

a = parseInt(lines.shift());
b = parseInt(lines.shift());
c = parseInt(lines.shift());
d = parseInt(lines.shift());

diff = diferenca(a, b, c, d);
console.log('DIFERENCA = '+ diff);
