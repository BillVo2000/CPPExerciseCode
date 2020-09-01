#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <iomanip>
#include <fstream>
#include <cmath>
#define u 100
#define h 100
using namespace std;

int main()
{
	float* ip;
	float arr1[h];
	float arr[u]; int n;
	float* ipp;
	cout << "input number of elements in array: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "arr[" << i << "] = "; cin >> arr[i];
	}
	// search for maximum number *ip
	ip = &arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] < *ip)
			ip = &*ip;
		else
			ip = &arr[i];
	}
	cout << " maximum number is: " << *ip << endl;
	// search for the remaining (arr1) of the subtraction between the maximum number and every single elements.
	for (int i = 0; i < n; i++)
	{
		arr1[i] = *ip - arr[i];
	}
	// search for minimum quotient (*ipp)
	if (arr1[0] != 0)
	{
		ipp = &arr1[0];
		for (int i = 1; i < n; i++)
		{
			if (arr1[i] != 0)
			{
				if (arr1[i] > * ipp)
					ipp = &*ipp;
				else
					ipp = &arr1[i];
			}
		}
	}
	if (arr1[0] == 0)
	{
		for (int i = 0; i < n; i++)
		{
			arr1[0] += arr[i];
		}
		ipp = &arr1[0];
		for (int i = 1; i < n; i++)     // search for minimum quotient different from 0
		{
			if (arr1[i] != 0)
			{
				if (arr1[i] > * ipp)
					ipp = &*ipp;
				else
					ipp = &arr1[i];
			}
		}
	}
	cout << " the smallest quotient number is: " << *ipp << endl;
	cout << "the second largest number is: " << *ip - *ipp << endl;
	return 0;
}
