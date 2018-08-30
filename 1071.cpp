#include<iostream>

using namespace std;

int main(){
  int a, b;
  int sum = 0;
  cin >> a >> b;
  if(a > b){
    int c = a;
    a = b;
    b = c;
  }
  a++;
  while(a < b){
    if(a%2==1 || a%2==-1)
      sum += a;
    a++;
  }
  cout << sum << endl;

  return 0;
}