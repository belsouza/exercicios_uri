"""
def areadotrianguloretangulo( baseA,  alturaC ):
    return ((baseA * alturaC) / 2.0 )

def areadocirculo( raioC ):
    return ( 3.14159 * raioC * raioC)

def areadotrapezio( baseA , baseB , alturaC ):
    return (((baseA + baseB) * alturaC ) / 2.0 )

def areadoquadrado( ladoB ):
    return (ladoB * ladoB)

def areadoretangulo( ladoA, ladoB ):
    return (ladoA * ladoB)

a, b, c = raw_input().split()

atr = areadotrianguloretangulo( float(a), float(c))
ac = areadocirculo( float(c) )
at = areadotrapezio( float(a), float(b), float(c))
aq = areadoquadrado( float(b) )
ar = areadoretangulo( float(a), float(b) )

print "TRIANGULO: {0:.3f}" . format(atr)
print "CIRCULO: {0:.3f}" . format(ac)
print "TRAPEZIO: {0:.3f}" . format(at)
print "QUADRADO: {0:.3f}" . format(aq)
print "RETANGULO: {0:.3f}" . format(ar)

"""

def areadotrianguloretangulo( baseA,  alturaC ):
    return ((baseA * alturaC) / 2.0 )

def areadocirculo( raioC ):
    return ( 3.14159 * raioC * raioC)

def areadotrapezio( baseA , baseB , alturaC ):
    return (((baseA + baseB) * alturaC ) / 2.0 )

def areadoquadrado( ladoB ):
    return (ladoB * ladoB)

def areadoretangulo( ladoA, ladoB ):
    return (ladoA * ladoB)

a, b, c = input().split()

atr = areadotrianguloretangulo( float(a), float(c))
ac = areadocirculo( float(c) )
at = areadotrapezio( float(a), float(b), float(c))
aq = areadoquadrado( float(b) )
ar = areadoretangulo( float(a), float(b) )

print ("TRIANGULO: {0:.3f}" . format(atr))
print ("CIRCULO: {0:.3f}" . format(ac))
print ("TRAPEZIO: {0:.3f}" . format(at))
print ("QUADRADO: {0:.3f}" . format(aq))
print ("RETANGULO: {0:.3f}" . format(ar))