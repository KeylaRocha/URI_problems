#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int A,B,C,MAIOR,MAIOR2;
    cin>>A>>B>>C;
    MAIOR=(A+B+fabs(A-B))/2;
    MAIOR2=(MAIOR+C+fabs(MAIOR-C))/2;
    cout<<MAIOR2<<" eh o maior"<<endl;

    return 0;
}

