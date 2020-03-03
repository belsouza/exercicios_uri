def areadotrianguloretangulo( baseA,  alturaC )
    return ((baseA * alturaC) / 2.0 )
end

def areadocirculo( raioC )
    return ( 3.14159 * raioC * raioC)
end

def areadotrapezio( baseA , baseB , alturaC )
    return (((baseA + baseB) * alturaC ) / 2.0 )
end

def areadoquadrado( ladoB )
    return (ladoB * ladoB)
end

def areadoretangulo( ladoA, ladoB )
    return (ladoA * ladoB)
end

linha = gets.chomp
arrat = linha.split(" ") 
a = arrat[0].to_f
b = arrat[1].to_f
c = arrat[2].to_f


atr = areadotrianguloretangulo( (a), (c))
ac = areadocirculo( (c) )
at = areadotrapezio( (a), (b), (c))
aq = areadoquadrado( (b) )
ar = areadoretangulo( (a), (b) )

puts ("TRIANGULO: %.3f" % [atr])
puts ("CIRCULO: %.3f" % [ac])
puts ("TRAPEZIO: %.3f" % [at])
puts ("QUADRADO: %.3f" % [aq])
puts ("RETANGULO: %.3f" % [ar])