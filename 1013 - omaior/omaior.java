import java.util.*;
import java.lang.Math;
import java.io.IOException;

public class Main{

    public static int maiordedois( int a, int b )
    {
        return ((a + b + Math.abs(a - b)) / 2 );
    }

    public static int maiordetres(int a, int b, int c){
        int p1;
        p1 = maiordedois(a, b);
        return ( maiordedois(p1, c));
    }

    public static void main( String[] args) throws IOException
    {
        int a, b, c, maior;
        Scanner input = new Scanner( System.in );
        String[] src = (input.nextLine()).split(" ");
        a =  Integer.parseInt(src[0]);
        b =  Integer.parseInt(src[1]);
        c =  Integer.parseInt(src[2]);
        maior = maiordetres(a, b, c);
        System.out.printf("%d eh o maior\n", maior);
    }

}