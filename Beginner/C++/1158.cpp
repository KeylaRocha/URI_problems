
#include <iostream>

using namespace std;

int main(){
  int N, X, Y, sum;
  cin >> N;

  for(; N > 0; N--){
    sum = 0;
    cin >> X >> Y;

    if(X%2 == 0) //Se for par, passa pro próximo numero impar
      X++;

    for(; Y > 0; Y--){ 
      sum += X;
      X += 2; //Passa pro proximo numero impar;
    }
    cout << sum << endl;
  }

  return 0;
}