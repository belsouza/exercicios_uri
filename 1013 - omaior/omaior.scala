object Main{
    def maiordedois(a: Int, b: Int):Int =
        ((a + b + (a - b).abs) / 2 )
    
    def maiordetres(a: Int, b: Int, c: Int): Int = {
        var p1 = maiordedois(a, b)
        return maiordedois(p1, c)
    }
        
    def main(args: Array[String]){
        val linha = (scala.io.StdIn.readLine()).split(" ")
        val a = linha(0).toInt
        val b = linha(1).toInt
        val c = linha(2).toInt
        val maior = maiordetres(a, b, c)
        printf("%d eh o maior\n", maior)
    }
}