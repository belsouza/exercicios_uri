using System;
using System.Collections.Generic;
using System.Globalization;
using System.Text;

namespace Foo{

    class FooMain{

        static double vesfera(double r)
        {
            return ((4.0 /3.0) * 3.14159 * r * r * r);
        }

        static void Main (String[] args)
        {
            double r, vol;
            r = Convert.ToDouble( Console.ReadLine(), CultureInfo.InvariantCulture );
            vol = vesfera( r );
            Console.WriteLine(String.Format("VOLUME = {0:0.000}", vol));
        }
    }
}