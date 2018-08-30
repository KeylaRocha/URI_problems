#include <iostream>

using namespace std;

void classify(int x)
{
    if(x%2 == 0 && x != 0)
        cout << "EVEN ";
    if((x-1)%2 == 0)
        cout << "ODD ";
    if(x > 0)
        cout << "POSITIVE" << endl;
    if(x < 0)
        cout << "NEGATIVE" << endl;
    if(x == 0)
        cout << "NULL" << endl;

}

int main()
{
    int n;
    cin >> n;
    int x;
    for(; n > 0; n--)
    {
        cin >> x;
        classify(x);
    }

    return 0;
}

