#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double a, b, c, p, ar;
    cin >> a >> b >> c;
    p = a + b + c;
    ar = ((a + b) * c)/2;
    if(a < b+c && b < a+c && c < b+c)
        cout << fixed << setprecision(1) << "Perimetro = " << p << endl;
    else
        cout << fixed << setprecision(1) << "Area = " << ar << endl;

    return 0;
}
