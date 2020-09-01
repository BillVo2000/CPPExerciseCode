#include <iostream>
using namespace std;

bool isSquareNumber(int n)
{
	for (int i = 1; i <= n; i++)
	{
		if (i * i == n)
			return true;
	}
	return false;
}

int main()
{
	cout << isSquareNumber(169);
	return 0;
}
