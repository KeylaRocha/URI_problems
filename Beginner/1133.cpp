#include<iostream>

using namespace std;

int main(){
  int a, b;
  cin >> a >> b;
  if(a > b){
    int aux = a;
    a = b;
    b = aux;
  }
  a++;
  while(a != b){
    if(a%5==2 || a%5==3)
      cout << a << endl;
    a++;

  }
}