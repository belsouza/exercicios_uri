import java.util.Scanner;
import java.io.IOException;

public class Main{

    public static int diferenca( int a, int b, int c, int d){
        return ( ( a * b) - (c * d));
    }

    public static void main( String[] args ) throws IOException{
        Scanner input = new Scanner(System.in);
        int a, b, c, d, diff;
        a = input.nextInt();
        b = input.nextInt();
        c = input.nextInt();
        d = input.nextInt();
        diff = diferenca(a, b, c, d);
        System.out.printf("DIFERENCA = %d\n", diff);
        input.close();
    }
}