#include <iostream>

using namespace std;

int main()
{
  string name;
  int c, n;
  cin >> c;
  for(int i = 0; i < c; i++)
  {
    cin >> name >> n;
    if(name == "Thor")
      cout << 'Y' << endl;
    else
      cout << 'N' << endl;
    
  }

  return 0;
}