#include <iostream>
#include <iomanip>
using namespace std;

void PrintASCII(int k)
{
    for (int i = 0; i <= k; i++)
        cout << char(i);
}

void PrintAlphabet(int k)
{
    // in ASCII, alphabet has in integer value.
    k--;
    for (int i = 65; i <= (65+k); i++)
    {
        cout << " " << char(i); // i is the integer value of that capitalized letter in ASCKII
        if ( (i-64) % 5 == 0)
            cout << endl;
    }

}

int main ()
{
    int k;
    cout << "input number k in ASCII: ";
    cin >> k;
    PrintAlphabet(k);
    PrintASCII(k);

    return 0;
}
