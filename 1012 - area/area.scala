object Main{

    def areadotrianguloretangulo( baseA: Double, alturaC: Double) : Double =
        ((baseA * alturaC) / 2.0 )

    def areadocirculo( raioC : Double ) : Double =
        ( 3.14159 * raioC * raioC)

    def areadotrapezio( baseA : Double , baseB : Double , alturaC : Double ) : Double =
        (((baseA + baseB) * alturaC ) / 2.0 )

    def areadoquadrado( ladoB : Double ) : Double =
        (ladoB * ladoB)

    def areadoretangulo( ladoA : Double, ladoB : Double ) : Double =
        (ladoA * ladoB)

    def main( args: Array[String]){
        val linha = ( scala.io.StdIn.readLine() ).split(" ")
        var a = linha(0).toDouble
        var b = linha(1).toDouble
        var c = linha(2).toDouble

        printf("TRIANGULO: %.3f\n", areadotrianguloretangulo(a, c) );
        printf("CIRCULO: %.3f\n", areadocirculo(c) );
        printf("TRAPEZIO: %.3f\n", areadotrapezio(a, b, c) );
        printf("QUADRADO: %.3f\n", areadoquadrado(b) );
        printf("RETANGULO: %.3f\n", areadoretangulo(a, b) );
    }
}