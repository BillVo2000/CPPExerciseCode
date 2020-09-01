#include <iostream>
using namespace std;

int FirstNumber(int n)
{
    int i = n % 10;
    return i;
}

int SecondNumber(int n)
{
    int i = n % 100;
    i = i - FirstNumber(n);
        i = i / 10;
    return i;
}

int ThirdNumber(int n)
{
    int i = n % 1000;
    i = i - FirstNumber(n) - SecondNumber(n)*10;
    i = i / 100;
    return i;
}

int FourthNumber(int n)
{

    int i = n - FirstNumber(n) - SecondNumber(n) * 10 - ThirdNumber(n)*100;
    i = i / 1000;
    return i;
}

int getReverseNumber(int n)
{
    int i = FirstNumber(n) * 1000 + SecondNumber(n) * 100 + ThirdNumber(n) * 10 + FourthNumber(n);
    return i;
}

int main()
{
    int i = 2394;
    cout << i << endl;
    cout << getReverseNumber(i);
    return 0;
}
