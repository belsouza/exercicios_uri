using System;
using System.Collections.Generic;
using System.Text.RegularExpressions;

namespace omaior{

    class maior{

        static int maiordedois(int a, int b)
        {
            return((a + b + Math.Abs(a - b)) / 2);
        }

        static int maiordetres(int a, int b, int c)
        {
            int p1, p2;
            p1 = maiordedois(a, b);
            p2 = maiordedois(p1, c);
            return p2;
        }

        public static void Main( String[] args )
        {
            int a, b, c, maior;
            string[] str;
            str = Regex.Split( Console.ReadLine(), @"\s+");
            a = Convert.ToInt32(str[0]);
            b = Convert.ToInt32(str[1]);
            c = Convert.ToInt32(str[2]);
            maior = maiordetres( a, b, c );
            Console.WriteLine("{0} eh o maior", maior);
        }

    }

}