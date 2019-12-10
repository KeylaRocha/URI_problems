#include<iostream>

using namespace std;

int main(){
  int maior = 0;
  int *n = new int[10];
  for(int i = 0; i<10; i++)
    cin >> n[i];
  for(int i = 1; i<10; i++)
    if(n[i] > n[maior])
      maior = i;
  cout << n[maior] << endl;
  cout << maior+1 << endl;

  return 0;
}