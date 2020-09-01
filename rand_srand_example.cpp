#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <time.h>
using namespace std;

int main ()
{
    // create a fix value (non srand() command.
    cout << "fix and unvariable value: " << rand() << endl << endl;


    // random and fix number in multidimensional array:
    float arr[100][100];
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            arr[i][j] = rand();
            cout << arr[i][j]<< "  ";
        }
        cout << endl;
    }
    cout << endl;

    // create a variable value by execute srand(time(NULL));
    int s;
    srand (time(NULL));
    s = rand()%100;
    cout << "normal and variable values: " << s << endl << endl;





    return 0;
}
