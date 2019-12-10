
#include <iostream>

using namespace std;

int main(){
  char x[4], y[4], z[4], d[3];  //variaveis do problema (tem um espaço a mais pro '\0')
  char c;  //pra dar entrada nos pontos e traço

  cin >> x[0] >> x[1] >> x[3] >> c;
  cin >> y[0] >> y[1] >> y[2] >> c;
  cin >> z[0] >> z[1] >> z[2] >> c;
  cin >> d[0] >> d[1];

  cout << x[0] << x[1] << x[3] << endl;
  cout << y[0] << y[1] << y[2] << endl;
  cout << z[0] << z[1] << z[2] << endl;
  cout << d[0] << d[1] << endl;

  return 0;
}