//package exercicios;

import java.util.*;
import java.io.IOException;

public class Main{
    
    private static double vesfera( double raio ){
        return ((4.0 / 3.0) * 3.14159 * raio * raio * raio );
    }

    public static void main (String[] args) throws IOException
    {
        Scanner input = new Scanner(System.in);
        double raio, vol;
        raio = input.nextDouble();
        vol = vesfera(raio);
        System.out.printf("VOLUME = %.3f\n", vol);
        input.close();
    }
}