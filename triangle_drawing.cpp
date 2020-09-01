#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdio>
#include <cstdlib>
#include <fstream>
using namespace std;

int main (int i, int h, int j)
{
    cout << "height of the triangle: "; cin >> h;
    if (h==0 || h < 0)
        cout << "not a valid input" << endl << endl;
    else
    {
		for (i = 1; i <= h; i++)
		{
			cout << setw(h - i + 2);
			{
				for (j = 1; j <= i; j++)
					cout << " *";
			}
			cout << endl;
		}
    }
    return 0;
}

