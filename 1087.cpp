#include <iostream>
using namespace std;

int main()
{
    int y1, y2, x1, x2;
    int mov;
    int deltax, deltay;   
    
    while(true)
    {  
        cin >> x1 >> y1 >> x2 >> y2;
        if(x1 == 0 && x1 == x2 && x2 == y1 && y1 == y2)
			break;
        deltax = x1-x2;
        deltay = y1-y2;
        if(deltax < 0)
            deltax *= (-1);
        if(deltay < 0)
            deltay *= (-1);
        if(x1 == x2 && y1 == y2)
            mov = 0;

        else if((x1 == x2 && y1 != y2) || (x1 != x2 && y1 == y2))
            mov = 1;
        else if(deltax == deltay)
            mov = 1;
        else 
            mov = 2;
        cout << mov << endl;
    }
    return 0;
}
