#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
      float salario, novSal;
      int percent;
      cin >> salario;
      if (salario > 0 && salario <= 400)
      {
            novSal = salario * 1.15;
            percent = 15;
      }
      else if (salario > 400 && salario <= 800)
      {
            novSal = salario * 1.12;
            percent = 12;
      }
      else if (salario > 800 && salario <= 1200)
      {
            novSal = salario * 1.10;
            percent = 10;
      }
      else if (salario > 1200 && salario <= 2000)
      {
            novSal = salario * 1.07;
            percent = 7;
      }
      else
      {
            novSal = salario * 1.04;
            percent = 4;
      }
      cout << fixed << setprecision(2) << "Novo salario: " << novSal << endl;
      cout << fixed << setprecision(2) << "Reajuste ganho: " << novSal - salario << endl;
      cout << "Em percentual: " << percent << " %" << endl;

      return 0;
}

