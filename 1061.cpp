#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
  int h1, m1, s1, d1;
  int h2, m2, s2, d2;
  int w, x, y, z;
  string a1, b, a2;
  cin >> a1 >> d1;
  cin >> h1 >> b >> m1 >> b >> s1;
  cin >> a2 >> d2;
  cin >> h1 >> b >> m1 >> b >> s2;

  w = abs(d1-d2)-1;
  x = abs(h1-h2);
  y = abs(m1-m2);
  z = abs(s1-s2);

  cout << w << " dia(s)" << endl;
  cout << x << " hora(s)" << endl;
  cout << y << " minuto(s)" << endl;
  cout << z << " segundo(s)" << endl;

  return 0;
}