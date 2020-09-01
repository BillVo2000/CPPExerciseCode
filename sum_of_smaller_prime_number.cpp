#include <cstdio>
#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
#include <fstream>
using namespace std;

int prime_number(int N);


int main()
{
    int N, i, s = 0;
    cout << "Input integer N: "; cin >> N; cout << " \n";
    cout << "Prime numbers that are smaller than " << N << " are: ";
    if (N == 2 || N == 1)
        cout << "No number" << endl;
    else
    for(i = 1; i < N; i++)
    {
        if(prime_number(i))
             cout << i << " ";
        if(prime_number(i))  // in boolean: return 0 is false and return 1 is true. And this command means if (...) "is true".
            s = s + i ;
    }
    cout << "\n";
    cout << "sum of all the numbers is: " << s << endl << endl;
    return 0;
}



// Check for prime number
int prime_number(int N) //the above announcement is "prime_number(i)", which means N is run from 1 to N.
{
    int i;
    if(N == 1)      // This command is for the number 1 (non-prime number), which is special case.
           return 0; // is non-prime number. "return 1;" is prime number
    else
    {
        for( i = 2; i < N; i++)
        {
            if(N % i == 0)
                return 0; // This command is for the non-prime number greater than 2
        }
            return 1; // This command is for prime number greater than 2 and number 2, which is special case.
                      // This is not anything relating to the "if" command above, neither the above "for" command.
    }
}
