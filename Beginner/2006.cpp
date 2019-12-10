#include<iostream>

using namespace std;

int main()
{
  int t, respostas[5], acertos = 0;

  cin >> t >> respostas[0] >> respostas[1] >> respostas[2] >> respostas[3] >> respostas[4];
  
  for(int i = 0; i < 5; i++)
    if(t == respostas[i])
      acertos++;
  
  cout << acertos << endl;

  return 0;
}