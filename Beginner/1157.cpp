#include<iostream>

using namespace std;

int main()
{
    int div;
    cin >> div;
    for(int i = 1; i <= div/2; i++)
        if(div%i == 0)
            cout << i << endl;
    cout << div << endl;

    return 0;
}
