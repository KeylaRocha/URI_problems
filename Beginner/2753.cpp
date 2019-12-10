#include<iostream>

using namespace std;

int main()
{
  char letra;
  for(int cod = 97; cod <= 122; cod++)
  {
    letra = cod;
    cout << cod << " " << 'e' << " " << letra << endl;
  }

  return 0;
}