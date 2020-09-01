#include <iostream>
using std::cout;

namespace function1 {
    namespace function11 {
void function12 ()
{ cout << "you are in function12, namespace function11, namespace function1." << std::endl; } }
    namespace function12 {
void function13 ()
{ cout << "you are in function13, namespace function12, namespace function1." << std:: endl; } }
}

namespace function2 {
void function12 ()
{ cout << "you are in function12, namespace function 2." << std::endl; }
}


int main ()
{
    function1::function12::function13(); // call function13() / namespace function12 / namespace function1.
    function2::function12();             // call function12() / namespace function2.
    return 0;
}
