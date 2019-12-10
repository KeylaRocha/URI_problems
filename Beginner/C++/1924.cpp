#include<iostream>

using namespace std;

int main()
{
  int n;
  string curso;

  cin >> n;

  for(int i = 0; i < n; i++)
    getline(cin, curso);
    cin.ignore();

  cout << "Ciencia da Computacao" << endl;

  return 0;
}