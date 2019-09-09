#include <iostream>

using namespace std;

int main()
{
  int l, r;
  cin >> l >> r;
  while(l != 0 and r != 0)
  {
    cout << l + r << endl;
    cin >> l >> r;
  }

  return 0;
}