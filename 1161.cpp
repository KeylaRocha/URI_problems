#include<iostream>
using namespace std;

long int fat (int n)
{
    if(n == 1)
        return 1;
    else
        return n * fat(n-1);
}

int main()
{
    int m, n;
    long int sum;
    while(cin >> n >> m)
    {
        sum = fat(m)+fat(n);
    }
    return 0;
}