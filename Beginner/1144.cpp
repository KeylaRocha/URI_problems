
#include<iostream>
#include<cmath>
#include<iomanip>

using std::cin;
using std::cout;
using std::fixed;
using std::setprecision;

int main(){
  int input;
  cin >> input;
  for(int i = 1; i <= input; i++){
    cout << fixed << setprecision(0); //Para não imprimir em notação cientifica e não colocar zeros na impressão
    cout << i << " " << pow(i, 2) << " " << pow(i, 3) <<'\n';
    cout << i << " " << pow(i, 2) + 1 << " " << pow(i, 3) + 1 <<'\n';
  }

  return 0;
}