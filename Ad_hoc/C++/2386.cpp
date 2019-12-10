#include<iostream>

using namespace std;

int main()
{
  int a, n, f, estrelas = 0;
  const int FOTON = 40000000;  //Fotons necesários para que a estrela seja vizualizada

  cin >> a >> n;

  for(int i = 0; i < n; i++)
  {
    cin >> f;

    if(a*f >=FOTON)
      estrelas++;
  }

  cout << estrelas << endl;
  return 0;
}