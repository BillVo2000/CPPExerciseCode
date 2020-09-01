#include <iostream>
#include <fstream>
#include <cstdio>
#include <cstdlib>
#include <iomanip>
#include <cmath>
using namespace std;

int main ()
{
    int s,n,i;
    cout << "problem: s(n)=1+2+3+4+...+n." << endl;
    cout << "input n: ";
    cin >> n;
    s=0;
    for (i=1; i<=n; ++i)
        s+=i;
    cout << "s(n)= " << s << endl;
    return 0;
}

/*  code input into BKCSE
int s,i;
s=0;
    for (i=1; i<=n; ++i)
        s=s+i;
    cout << "s(n)= " << s << endl;
    return 0;
*/
