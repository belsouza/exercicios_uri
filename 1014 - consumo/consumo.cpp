#include <iostream>
#include <iomanip>

using namespace std;
class consumo{
	public:
		int x;
		float y;
		double calcular(int x, float y){
			return( (float) x / y );
		}
};

int main(void){
	consumo foo;
	cin >> foo.x;
	cin >> foo.y;
	cout << fixed << setprecision(3) << foo.calcular(foo.x, foo.y) << " km/l\n";
	return 0;
}
