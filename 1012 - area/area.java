import java.util.*;
import java.io.IOException;


public class Main{

    public static double areadotrianguloretangulo( double baseA, double alturaC  ){
        return ((baseA * alturaC) / 2.0 );
    }
    
    public static double areadocirculo( double raioC ){
        return ( 3.14159 * raioC * raioC);
    }
    
    public static double areadotrapezio( double baseA, double baseB, double alturaC )
    {
        return (((baseA + baseB) * alturaC ) / 2.0 );
    }
    
    public static double areadoquadrado( double ladoB )
    {
        return (ladoB * ladoB);
    }
    
    public static double areadoretangulo( double ladoA, double ladoB )
    {
        return (ladoA * ladoB);
    }

    public static void main (String[] args) throws IOException
    {
        Double a, b, c;
        String linha;
        String[] foo;
        Scanner input = new Scanner( System.in );
        linha = input.nextLine();
        foo = linha.split("\\s+");
        a = Double.parseDouble(foo[0]);
        b = Double.parseDouble(foo[1]);
        c = Double.parseDouble(foo[2]); 
        System.out.printf("TRIANGULO: %.3f\n", areadotrianguloretangulo(a, c));
        System.out.printf("CIRCULO: %.3f\n", areadocirculo(c));
        System.out.printf("TRAPEZIO: %.3f\n", areadotrapezio(a, b, c));
        System.out.printf("QUADRADO: %.3f\n", areadoquadrado(b));
        System.out.printf("RETANGULO: %.3f\n", areadoretangulo(a, b));   
        
    }
}