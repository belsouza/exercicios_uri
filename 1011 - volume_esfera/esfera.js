var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

function vesfera ( raio ){
    return ((4.0/3.0) * 3.14159 * raio * raio * raio );
}

var raio = parseInt( lines );
var vol = vesfera(raio);
console.log("VOLUME = " + vol.toFixed(3));
