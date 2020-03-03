#include <iostream>
#include <cmath>

using namespace std;

class MaiordeTres{

    private:
        int maiordedois( int a, int b )
        {
            return((a + b + abs(a - b)) / 2) ;
        }

    public:

        int maiordetres(int a, int b, int c)
        {
            int p1, p2;
            p1 = maiordedois(a, b);
            p2 = maiordedois(p1, c);
            return p2;
        }
};

int main(void){
    int a, b, c, maior;
    MaiordeTres foo;
    cin >> a >> b >> c;
    maior = foo.maiordetres(a, b, c);
    cout << maior << " eh o maior\n";
    return 0;
}
