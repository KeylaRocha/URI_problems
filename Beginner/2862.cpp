#include <iostream>

using namespace std;

int main(){
  int c, n;
  cin >> c;

  while (c > 0){
    cin >> n;

    if (n > 8000)
      cout << "Mais de 8000!" << endl;

    else
      cout << "Inseto!" << endl;
  
    c--;
  }
  
  return 0;
}