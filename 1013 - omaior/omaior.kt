import java.util.*
import kotlin.text.*
import kotlin.io.*

fun maiordedois( a: Int, b: Int ) : Int {
    return ((a + b + Math.abs(a - b)) / 2 )
}

fun maiordetres(a: Int, b: Int, c: Int) : Int{
    var p1 = maiordedois(a, b)
    return (maiordedois(p1, c))
}

fun main( args: Array<String>){
    var(a, b, c) = readLine()!!.split(' ').map( String::toInt )
    var maior = maiordetres(a, b, c)
    println("$maior eh o maior")
}