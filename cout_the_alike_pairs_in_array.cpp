#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <iomanip>
#include <fstream>
#include <cmath>
#define t 100
using namespace std;

int pairs(int n);

int main()
{
	int n;
	cout << "input number of elements in array: "; cin >> n;
	cout << "The number of alike pairs are: " << pairs(n);
	return 0;
}

int pairs(int n)
	{
		int s = 0; float p; float arr[t];
		for (int i = 0; i < n; i++)
		{
			cout << "arr[" << i << "] =  ";
			cin >> arr[i];
		}
		for (int i = 0; i < n; i++)
		{
			for (int j = i + 1; j < n; j++)
			{
				p = arr[i] - arr[j];
				if (p == 0)
					s += 1;
			}
		}
		return s;
	}