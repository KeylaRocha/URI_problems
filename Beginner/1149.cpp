#include<iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){
  int a, n, sum=0;
  cin >> a >> n;

  while(n<=0){
    cin >> n;
  }
for(int i=0; i<n; i++)
  sum+=(a+i);
cout << sum << endl;

  return 0;
}