#include <iostream>
#include <iomanip>

using namespace std;

class Geometrico{

    private:
        double areadotrianguloretangulo( double baseA, double alturaC  ){
            return ((baseA * alturaC) / 2.0 );
        }

        double areadocirculo( double raioC ){
            return ( 3.14159 * raioC * raioC);
        }

        double areadotrapezio( double baseA, double baseB, double alturaC )
        {
            return (((baseA + baseB) * alturaC ) / 2.0 );
        }

        double areadoquadrado( double ladoB )
        {
            return (ladoB * ladoB);
        }

        double areadoretangulo( double ladoA, double ladoB )
        {
            return (ladoA * ladoB);
        }
    
    public: 
        void show(){
            double a, b, c;
            cin >> a >> b >> c;
            cout << "TRIANGULO: " << fixed << setprecision(3) << areadotrianguloretangulo(a, c) << "\n";
            cout << "CIRCULO: " << fixed << setprecision(3) <<  areadocirculo(c) << "\n";
            cout << "TRAPEZIO: " << fixed << setprecision(3) <<  areadotrapezio(a, b, c) << "\n";
            cout << "QUADRADO: " << fixed << setprecision(3) <<  areadoquadrado(b) << "\n";
            cout << "RETANGULO: " << fixed << setprecision(3) <<  areadoretangulo(a, b) << "\n";
        }


};

int main(void)
{
    Geometrico foo;
    foo.show();
    return 0;
}
