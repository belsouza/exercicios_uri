import java.util.Scanner
import kotlin.text.*

fun diferenca(a: Int, b: Int, c: Int, d: Int) : Int{
    return ( (a*b)-(c*d));
}

fun main(args:Array<String>){
    var input = Scanner(System.`in`)
    var a: Int; var b: Int; var c: Int;var d: Int; var diff: Int
    a = input.nextInt()
    b = input.nextInt()
    c = input.nextInt()
    d = input.nextInt()
    diff = diferenca(a, b, c, d)
    println("DIFERENCA = $diff")
}