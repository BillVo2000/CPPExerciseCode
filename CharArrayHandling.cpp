#include <iostream>
using namespace std;

int countCharacter(const char str[], char key)
{
    int count = 0;
    for (int i = 0; str[i]!='\0'; i++)
    {
        if (key == str[i])
        count = count + 1;
    }
    return count;
}

int main ()
{
    char data[] = "Hello";
    char key = 'l';
    cout << countCharacter(data,key);

    return 0;
}
