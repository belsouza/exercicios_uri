fun vesfera( raio: Double ):Double{
    return (4.0/3.0) * 3.14159 * raio * raio * raio 
}

fun main(args:Array<String>){
    var raio = readLine()!!.toDouble();
    var vol = vesfera(raio);
    println("VOLUME = %.3f".format(vol));
}