
#include <iostream>

using namespace std;

int main(){
  int n; //Casos teste
  cin >> n;
  int l, c, quebrados = 0;
  for(int i = n; i > 0; i--){
    cin >> l >> c;
    if(l > c)  //Se derrubar a bandeja
      quebrados += c;  //Aumenta o numero de copos quebrados
  }
  cout << quebrados << endl;

  return 0;
}