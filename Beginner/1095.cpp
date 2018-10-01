#include <iostream>

using namespace std;

int main()
{
    int j = 60, i = 1;
    while(j >= 0)
    {
        cout << "I=" << i << " " << "J=" << j << endl;
        j -= 5;
        i += 3;
    }

    return 0;
}
