#include <iostream>

using namespace std;

int  main()
{
	int i = 1,j = 7;
	while(i <= 9)
	{
		for(int k = j; k >= j-2; k--)
			cout << "I=" << i << " " << "J=" << k << endl;
		i += 2;
		j += 2;
	}

	return 0;
}
