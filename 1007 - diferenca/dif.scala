object Main{
    def diferenca( a:Int, b:Int, c:Int, d:Int ) : Int = (a * b) - ( c * d )
    def main( args: Array[String]){
        var a = scala.io.StdIn.readInt() : Int
        var b = scala.io.StdIn.readInt() : Int
        var c = scala.io.StdIn.readInt() : Int
        var d = scala.io.StdIn.readInt() : Int
        var diff = diferenca(a, b, c, d)
        printf("DIFERENCA = %d\n", diff)
    }
}