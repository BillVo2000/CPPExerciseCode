#include <iostream>
#include <fstream>
#include <cstdio>
#include <cstdlib>
#include <iomanip>
#include <cmath>
#define n 100
using namespace std;

float average_distance(int u);

int main()
{
    float e; float arr[n]; int u; float A;
    cout << "input the number of components in array: "; cin >> u;

	cout << " average distance is: " << average_distance(u) << endl;

	return 0;
}

float average_distance(int u)
{
    float arr[n];
    float A;
    float e;

    for (int i = 0; i < u; i++)
	{
		cout << " arr[" << i << "] = ";
		cin >> arr[i];
	}

	A = 0;
	for (int i = 1; i < u; i++)
	{
		e = abs(arr[i] - arr[i - 1]);
		cout << e << " ";
		A = A + e;
	}


	A = A / (u - 1);
	return A;
}

