#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <exception>
using namespace std;

int main ()
{
    int a;
    int age = 0;
    try
    {
        cout << "please enter your age: ";
        cin >> age;
        if (age < 0)
            throw ";alksdjf;alks";
        if (age > 150)
            throw 34;
        if (age == 100)
            throw 'a';
        else
            throw 4.5;
    }


    catch (char const* e)  // e is the statement after throw keyword
                           // for catching a string value, we use "char const* e"
                           // if you use standard exception, write like this: "catch (std::exception e)"
                           // when using standard exception, you must include ".what()" after e
    {
        cout << "invalid input, age must be greater than 0, error no." << 47 << endl;
    }
    catch (int e)  // for writing a statement, you use char const* instead of string
                           // if you use standard exception, write like this: "catch (std::exception e)"
    {
        cout << "invalid input, age can't be greater than 150, error no." << 56 << endl;
    }
    catch (char a)
    {
        cout << "happy a century life: " << endl;
    }
    catch (...)
    {
        cout << "thank you for inputing your age." << endl;
    }
    return 0;
}
