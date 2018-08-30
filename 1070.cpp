#include <iostream>

using namespace std;

int main()
{
    int x;
    cin >> x;
    for(int i = x; i < x+12; i++)
        if((i-1)%2 == 0)
            cout << i << endl;

    return 0;
}

