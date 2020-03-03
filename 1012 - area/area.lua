function areadotrianguloretangulo( baseA,  alturaC )
    return ((baseA * alturaC) / 2.0 )
end

function areadocirculo( raioC )
    return ( 3.14159 * raioC * raioC)
end

function areadotrapezio( baseA , baseB , alturaC )
    return (((baseA + baseB) * alturaC ) / 2.0 )
end

function areadoquadrado( ladoB )
    return (ladoB * ladoB)
end

function areadoretangulo( ladoA, ladoB )
    return (ladoA * ladoB)
end

a, b, c = io.read("*n", "*n", "*n")
atr = string.format('%.3f', areadotrianguloretangulo(a, c))
ac = string.format('%.3f', areadocirculo(c))
at = string.format('%.3f', areadotrapezio(a, b, c))
aq = string.format('%.3f', areadoquadrado(b))
ar = string.format('%.3f', areadoretangulo (a, b))
print("TRIANGULO: "..atr)
print("CIRCULO: "..ac)
print("TRAPEZIO: "..at)
print("QUADRADO: "..aq)
print("RETANGULO: "..ar)

