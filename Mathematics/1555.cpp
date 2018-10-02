#include<iostream>
#include<cmath>

using namespace std;

int main(){
  int n; //Número de casos teste
  int x, y; //variaveis que serão usadas
  cin >> n;

  while(n > 0){
  cin >> x >> y;

  //Funções que decidirão que é o campeão
  int c = (-100*x + pow(y, 3));
  int b = (2*pow(x,2) + pow(5*y, 2));
  int r = (pow(3*x, 2) + pow(y, 2));

  //Decisão de quem é o campeão
  if(c > b and c > r)
    cout << "Carlos ganhou" << endl;

  else if(b > c and b > r)
    cout << "Beto ganhou" << endl;

  else if(r > b and r > b)
    cout << "Rafael ganhou" << endl;

  n--;
  }

  return 0;
}