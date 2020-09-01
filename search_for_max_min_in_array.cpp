#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#define y 50
using namespace std;

int main()
{	int i,n,max;
	int a[y];
    cout << " input n: ";
    cin >> n;
	for(i=1;i<=n;i++)
	{
	cout << "input arr[" << i << "]: ";
	cin >> a[i];
	}

    {
    max=a[1];
    for(i=1;i<=n;i++)
    {
    if(max<a[i])max=a[i];
    }
    cout << max;

    return 0;

    }
}

