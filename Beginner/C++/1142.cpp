#include <iostream>

using namespace std;

int main()
{
    static int i = 1;
    int n;
    cin >> n;
    for(; n > 0; n--)
    {
        for(int j = 0;j < 4 ;j++, i++)
        {
            if(i%4 == 0)
                cout << "PUM" << endl;
            else
                cout << i << " ";
        }
    }

    return 0;
}
