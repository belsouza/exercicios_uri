object Main{
    def vesfera( raio: Double) : Double =
        (4.0 / 3.0 ) * 3.14159 * raio * raio * raio
    
    def main( args: Array[String]){
        var raio = scala.io.StdIn.readDouble : Double
        var vol = vesfera(raio)
        printf("VOLUME = %.3f\n", vol)
    }
}