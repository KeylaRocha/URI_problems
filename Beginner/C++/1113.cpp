#include <iostream>

using namespace std;

int main()
{
    int x, y;
    while(true)
    {
        cin >> x >> y;
        if(x == y)
            break;
        if(x < y)
            cout << "Crescente" << endl;
        if(x > y)
            cout << "Decrescente" << endl;
    }

    return 0;
}

