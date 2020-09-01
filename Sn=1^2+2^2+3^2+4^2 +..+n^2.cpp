#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <fstream>
using namespace std;

int  main ()
{
    int i,Sn, n;
    cout << "problem: Sn = 1^2 + 2^2 + 3^2 + ... + n^2" << endl;
    cout << "input n: "; cin >> n;
    Sn=0;
    for (i=0;i<=n;i++)
        {
       Sn = Sn + pow(i,2);
        }
    cout << "Sn is: " << Sn << endl;
    return 0;
}

/* code input into BKCSE:
int i,Sn;
    Sn=0;
    for (i=0;i<=n;i++)
        {
       Sn = Sn + pow(i,2);
        }
    cout << "Sn is: " << Sn << endl;
    return 0;
*/
