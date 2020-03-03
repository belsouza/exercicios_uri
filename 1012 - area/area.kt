import java.util.*

fun areadotrianguloretangulo( baseA : Double, alturaC : Double ) : Double
{
    return ((baseA * alturaC) / 2.0 );
}

fun areadocirculo( raioC : Double ) : Double
{
    return ( 3.14159 * raioC * raioC);
}

fun areadotrapezio( baseA : Double, baseB : Double, alturaC : Double ) : Double
{
    return (((baseA + baseB) * alturaC ) / 2.0 );
}

fun areadoquadrado( ladoB : Double ) : Double
{
    return (ladoB * ladoB);
}

fun areadoretangulo( ladoA : Double, ladoB : Double ) : Double
{
    return (ladoA * ladoB);
}

fun main( args: Array<String>){
    var(a, b, c) = readLine()!!.split(' ');
    println("TRIANGULO: %.3f".format( areadotrianguloretangulo(a.toDouble(), c.toDouble()) ));
    println("CIRCULO: %.3f".format( areadocirculo(c.toDouble()) ));
    println("TRAPEZIO: %.3f".format( areadotrapezio(a.toDouble(), b.toDouble(), c.toDouble()) ));
    println("QUADRADO: %.3f".format( areadoquadrado(b.toDouble()) ));
    println("RETANGULO: %.3f".format( areadoretangulo(a.toDouble(), b.toDouble()) ));
}