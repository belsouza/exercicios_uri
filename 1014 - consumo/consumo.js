//var input = require('fs').readFileSync('stdin', 'utf8');
var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

function converter( x, y )
{
    return ( x / y );
}

var x = parseInt( lines.shift() );
var y = parseFloat( lines.shift() );
console.log( (converter(x,y)).toFixed(3) +" km/l");