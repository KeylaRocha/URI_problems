#include <iostream>

using namespace std;

int main()
{
    int x, y;
    int sum;
    while(true)
    {
        sum = 0;
        cin >> x >> y;
        if(x <= 0 || y <= 0)
            break;
        if(x < y)
            for(int i = x; i <= y; i++)
            {
                sum += i;
                cout << i << " ";
            }
        if(x > y)
            for(int i = y; i <= x; i++)
            {
                sum += i;
                cout << i << " ";
            }
        cout << "Sum=" << sum << endl;
    }


    return 0;
}
