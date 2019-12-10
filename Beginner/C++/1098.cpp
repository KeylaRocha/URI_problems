#include<iostream>

using namespace std;

int main(){
  double i=0, j;
  while(i<=2){
    for(j=1; j<4; j++)
      cout << "I=" << i << " J=" << j+i << endl;
    i+=0.2;
  }
  return 0;
}