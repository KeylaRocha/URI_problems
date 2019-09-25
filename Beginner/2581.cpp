#include <iostream>

using namespace std;

int main()
{
  string pergunta;
  int n;
  cin >> n;
  while(n > 0)
  {
    getline(cin, pergunta);
    cin.ignore();
    cout << "I am Toorg!" << endl;
    n--;
  }

  return 0;
}