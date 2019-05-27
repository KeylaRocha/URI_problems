
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
  double X;
  double *N = new double[100];

  cin >> X;

  for(int i = 0; i < 100; i++){
    N[i] = X;
    X /= (2*1.0); //Para não ter coerção de double pra int
  }

  for(int i = 0; i < 100; i++)
    cout << fixed << setprecision(4) << "N[" << i << "] = " << N[i] << endl;

  return 0;
}