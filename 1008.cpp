#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int NUMB,HOUR;
    double SALARY,PERHOUR;
    cin>>NUMB>>HOUR>>PERHOUR;
    SALARY=PERHOUR*HOUR;
    cout<<fixed<<setprecision(2)<<"NUMBER = "<<NUMB<<endl<<"SALARY = U$ "<<SALARY<<endl;
    return 0;
}

