#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#define u 100
using namespace std;


int main (int numberOfElement)
{
    int arrange [u];
    cout << "input the number of the arrange: ";
    cin >> numberOfElement;
    for (int i=0; i<numberOfElement; i++)
    {
        cout << "input the value of number " << i << " in the arrange: ";
        cin >> arrange [i];
    }
    cout << endl << endl;


    int *option;
    option = &arrange [0];
    for (int i=1; i<numberOfElement; i++)
    {
        if (arrange [i] < *option)
            option = & *option;
        else
            option = & arrange [i];
    }
    cout << endl;
    cout << "max value in the arrange is: " << *option;




    option = &arrange [0];
     for (int i=1; i<numberOfElement; i++)
    {
        if (arrange [i] > *option)
            option = & *option;
        else
            option = & arrange [i];
    }
    cout << endl;
    cout << "min value in the arrange is: " << *option << endl;


    return 0;
}



/* in the available code on BKCSE: option is announced as a value, but in my task option is announced as an address
(I use pointer in my task , but it's not available on BKCSE. */

