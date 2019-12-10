#include <iostream>

using namespace std;

int main()
{
  int T1, T2, T3, T4;
  cin >> T1 >> T2 >> T3 >> T4;
  /*O decremento das 3 primeiras variaveis se deve ao fato de
    que elas terão uma 'regua' ligada a elas. */
  T1--;
  T2--;
  T3--;
  int tomadas = T1 + T2 + T3 + T4;
  cout << tomadas << endl;

  return 0;
}