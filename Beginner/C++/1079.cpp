#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    cin >> n;
    double x, y, z;
    for(; n > 0; n--)
    {
        cin >> x >> y >> z;
        x *= 2;
        y *= 3;
        z *= 5;
        cout << fixed << setprecision(1) << (x + y + z)/(1.0*10) << endl;
    }

    return 0;
}
