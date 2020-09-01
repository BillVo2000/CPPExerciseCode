#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstdio>
#include <iomanip>
#include <cmath>
#define n 100
using namespace std;

int main()
{
	float arr[n];
	int u;
	cout << "input number of elements in array: "; cin >> u;
	for (int i = 0; i < u; i++)
	{
		cout << "arr[" << i << "] = "; cin >> arr[i];
	}

	float s = 0;
	for (int j = 0; j < u; j++)
	{
		for (int i = 1; i < u; i++)
		{
			s = arr[i] - arr[i - 1];
			if (s > 0)
				swap(arr[i], arr[i - 1]);


		}
	}
	for (int i = u-1; i >= 0; i--)
	{
		cout << arr[i] << "  ";
	}




	return 0;
}