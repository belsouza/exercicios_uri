#include <iostream>

using namespace std;

class Dif{

    public:

    int diferenca( int a, int b, int c, int d){
        return ( (a * b) - (c * d));
    }
};

int main(void)
{
    Dif pub;
    int a, b, c, d, diferenca;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    diferenca = pub.diferenca(a, b, c, d);
    cout << "DIFERENCA = " << diferenca << "\n";
    return 0;
}