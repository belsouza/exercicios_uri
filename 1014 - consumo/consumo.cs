using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace _1014
{
    class Program
    {
        static double consumo(int x, double y)
        {
            return (Convert.ToDouble(x) / y);
        }
        static void Main(string[] args)
        {
            int x = Convert.ToInt32(Console.ReadLine());
            double y = Convert.ToDouble(Console.ReadLine());
            Console.WriteLine("{0:0.000} km/l", consumo(x, y));
        }
    }
}
