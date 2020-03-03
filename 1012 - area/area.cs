using System;
using System.Collections.Generic;
using System.Globalization;
using System.Text;
using System.Text.RegularExpressions;


namespace exercicios{
    
    class Area{

        private static double areadotrianguloretangulo( double baseA, double alturaC  ){
            return ((baseA * alturaC) / 2.0 );
        }

        private static double areadocirculo( double raioC ){
            return ( 3.14159 * raioC * raioC);
        }

        private  static double areadotrapezio( double baseA, double baseB, double alturaC )
        {
            return (((baseA + baseB) * alturaC ) / 2.0 );
        }

        private  static double areadoquadrado( double ladoB )
        {
            return (ladoB * ladoB);
        }

        private static double areadoretangulo( double ladoA, double ladoB )
        {
            return (ladoA * ladoB);
        }

        private static void calculararea( string dimensoes )
        {
            double a, b, c;
            string[] lados = Regex.Split (dimensoes, @"\s+");
            a = Convert.ToDouble( lados[0], CultureInfo.InvariantCulture );
            b = Convert.ToDouble( lados[1], CultureInfo.InvariantCulture );
            c = Convert.ToDouble( lados[2], CultureInfo.InvariantCulture );
            Console.WriteLine("TRIANGULO: {0:0.000}", areadotrianguloretangulo(a, c) );
            Console.WriteLine("CIRCULO: {0:0.000}", areadocirculo(c));
            Console.WriteLine("TRAPEZIO: {0:0.000}", areadotrapezio(a, b, c));
            Console.WriteLine("QUADRADO: {0:0.000}", areadoquadrado (b));
            Console.WriteLine("RETANGULO: {0:0.000}", areadoretangulo (a, b));
        }

        static public void Main( String[] args )
        {
            string dimensoes = Console.ReadLine();
            calculararea( dimensoes );
        }
    }

}