#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstdio>
#include <iomanip>
#include <cmath>
#define n 100
#define u 100
#define m 100
using namespace std;

int main()
{
	float arr[3][3][3][2] =
	{
	5,8,  9,6,  2,5,       4,5,  2,2, 1,4,        5,5, 2,1,  4,4,
	5,54, 2,1,  64,32,	   6,7,  2,1, 5,6,        9,5, 45,12,3,2,
	65,78,98,65,12,56,     45,5, 4,5, 2,2,        1,2, 5,8,  525,2,
	};

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			for (int w = 0; w < 3; w++)
			{
				for (int y = 0; y < 2; y++)
				{
					cout << arr[i][j][w][y] << " ";
				}
				cout << "    ";
			}
			cout << "      ";
		}
		cout << endl;
	}
	return 0;
}
