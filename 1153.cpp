#include <iostream>

using namespace std;

long long int fatorial(int n)
{
    if(n == 1)
        return 1;
    else
        return n * fatorial(n-1);
}

int main()
{
    int fat;
    cin >> fat;
    cout << fatorial(fat) << endl;

    return 0;
}

