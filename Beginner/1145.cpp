#include<iostream>

using namespace std;

int main(){
  int x, y;
  cin >> x >> y;

  for(int i = 1; i <= y; i++){
    cout << i;

    //Numero de elementos por linha será sempre multiplo de x, logo o ultimo numero da linha é multiplo de x. 
    if(i%x == 0)
      cout << '\n';

    //Quando não for o ultimo numero da linha
    if(i%x != 0)
      cout << " ";
  }

  return 0;
}