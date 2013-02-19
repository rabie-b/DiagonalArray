#include <iostream>
using namespace std;

void main()
{
	const int ted = 3;
	int Array[ted][ted] /*= {{1, 2, 3}
					      ,{4, 5, 6}
						  ,{7, 8, 9}}*/;

	for (int i = 0; i < ted; i++)
	{
		cout << "enter row " << i+1 << ":\n";
		for (int j = 0; j < ted; j++)
		{
			cin >> Array[i][j];
		}
	}

	int sum = 0;
	int positionRow = 0; // i
	int positionColumn = 0;// j

	for (int i = 0; i < ted; i++)
	{
		for (int j = 0; j < ted; j++)
		{
			if (positionRow ==  i && positionColumn == j)
			{
				sum += Array[i][j];
				positionRow++;
				positionColumn++;
			}
		}
	}

	cout << sum;
}