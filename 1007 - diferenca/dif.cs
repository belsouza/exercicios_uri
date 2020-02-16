using System;
using System.Collections.Generic;
using System.Text;

namespace Dif{

    class diferenca{

        public static int calculadiferenca( int a, int b, int c, int d ){
            return ( (a * b) - ( c * d ));
        }

        public static void Main(string[] args){
            int a, b, c, d, diferenca;
            a = Convert.ToInt32( Console.ReadLine());
            b = Convert.ToInt32( Console.ReadLine());
            c = Convert.ToInt32( Console.ReadLine());
            d = Convert.ToInt32( Console.ReadLine());
            diferenca = calculadiferenca(a, b, c, d);
            Console.WriteLine("DIFERENCA = {0}", diferenca);
        }
    }
}