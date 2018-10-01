#include <iostream>

 using namespace std;

 int main()
 {
    int n;
    int x;
    int in = 0, out = 0;
    cin >> n;
    for(;n > 0; n--)
    {
        cin >> x;
        if(x < 10 || x > 20)
            out++;
        else if(x >= 10 && x <= 20)
            in++;
    }
    cout << in << " in" << endl;
    cout << out << " out" << endl;

    return 0;
 }
 
