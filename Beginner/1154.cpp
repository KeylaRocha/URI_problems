#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int idade;
	float entradas = 0;
	float sum = 0;
	while(1)
	{
		cin >> idade;
		if(idade < 0)
			break;
		else
		{
			entradas++;
			sum += idade;
		}
	}
	cout << fixed <<setprecision(2) << sum/entradas << endl;
	return 0;
}
		
		
