var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

function areadotrianguloretangulo( baseA, alturaC  ){
    return ((baseA * alturaC) / 2.0 );
}

function areadocirculo( raioC ){
    return ( 3.14159 * raioC * raioC);
}

function areadotrapezio( baseA, baseB, alturaC )
{
    return (((baseA + baseB) * alturaC ) / 2.0 );
}

function areadoquadrado( ladoB )
{
    return (ladoB * ladoB);
}

function areadoretangulo( ladoA, ladoB )
{
    return (ladoA * ladoB);
}

var data = lines[0] . split(" ");
a = parseFloat(data[0]);
b = parseFloat(data[1]);
c = parseFloat(data[2]);

console.log("TRIANGULO: " + areadotrianguloretangulo(a, c).toFixed(3) );
console.log("CIRCULO: " + areadocirculo(c).toFixed(3) );
console.log("TRAPEZIO: " + areadotrapezio(a, b, c).toFixed(3) );
console.log("QUADRADO: " + areadoquadrado(b).toFixed(3) );
console.log("RETANGULO: " + areadoretangulo(a, b).toFixed(3) );