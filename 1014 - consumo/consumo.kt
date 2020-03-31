import java.util.*

fun consumo( x: Int, y : Double) : Double{
    return ((x.toDouble())/ y);
}

fun main( args: Array<String>){
    var input = Scanner(System.`in`)
    var x : Int
    var y : Double
    x = input.nextInt();
    //y = readLine()!!.toDouble()  - works
    y = input.nextDouble() //not works
    println("%.3f km/l". format(consumo(x,y)))
}