#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double A, B, C, R1, R2, Delta;
    cin >> A >> B >> C;
    Delta = pow(B,2) - (4 * A * C);
    if (Delta < 0 || A == 0)
        cout << "Impossivel calcular" << endl;
    else
    {
        R2 = ( - B - sqrt(Delta))/(2 * A);
        R1 = ( - B + sqrt(Delta))/(2 * A);
        cout << fixed << setprecision(5) << "R1 = " << R1 << endl << "R2 = " << R2 << endl;
    }


    return 0;
}

