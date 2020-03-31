import java.util.Scanner;
import java.io.IOException;
/**
 *
 * 
 *  */
public class Main {
    
    private static float calcularconsumo( int x, float y)
    {
        return ( (float) x / y );
    }
    
    public static void main(String[] args ) throws IOException
    {
        Scanner input = new Scanner( System.in );
        int x;
        float y;
        x = Integer.parseInt(input.nextLine());
        y = Float.parseFloat(input.nextLine());        
        System.out.printf("%.3f km/l\n", calcularconsumo(x,y)  );
    }
    
}
