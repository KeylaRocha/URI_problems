#include<iomanip>
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    double x1,y1,x2,y2,X,Y,DIST;
    cin>>x1>>y1>>x2>>y2;
    X=(x1-x2);
    Y=(y1-y2);
    DIST=sqrt(pow(X,2)+pow(Y,2));
    cout<<fixed<<setprecision(4)<<DIST<<endl;

    return 0;
}
