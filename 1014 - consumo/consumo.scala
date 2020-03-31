object Main{
    def consumo (x : Int, y : Double) : Double =
        x / y

    def main( args: Array[String]){
        var x = scala.io.StdIn.readInt() : Int
        var y = scala.io.StdIn.readDouble() : Double
        var res = consumo(x , y)
        printf("%.3f km/l\n", res)
    }
}