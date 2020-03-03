#include <iostream>
#include <iomanip>

using namespace std;

double vesfera( double r )
{
    return (( 4.0 / 3.0 ) * 3.14159 * r * r * r );
}

int main()
{
    double r,vol;
    cin >> r;
    vol = vesfera (r);
    cout << "VOLUME = " << fixed << setprecision(3) << vol << "\n";
    return 0;
}