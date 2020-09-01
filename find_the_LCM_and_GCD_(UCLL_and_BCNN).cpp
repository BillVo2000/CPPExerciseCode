#include <stdio.h>
#include <iostream>
using namespace std;

long ucln(long a, long b)
{
    long r;
    while (a%b != 0)
    {
        r = a%b; // if b > a, then r = a
        a = b; // because not sure whether a or b is greater, so this step is to swap a and b for next while loop
        b = r; // mean b = a if b > a
    }
    return r;

}

int main()
{
    long a, b;
    cin >> a >> b;
    cout << "UCLN : "<<ucln(a,b)<<endl;
    cout << "BCNN : "<<a*b/ucln(a,b)<<endl;
    return 0;
}
