#include <iostream>

using namespace std;

int main()
{
    double num;
    int posi = 0;
    for (int enter = 0; enter < 6; enter++)
    {
        cin >> num;
        if(num > 0)
            posi++;
    }
    cout << posi << " valores positivos" << endl;

    return 0;
}

