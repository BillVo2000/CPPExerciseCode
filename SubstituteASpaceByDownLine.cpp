#include <iostream>
using namespace std;

void printWordByWord(char str[])
{
    int isPrevSpace = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ')
        {
            cout << str[i];
            isPrevSpace = 0;
        }
        else
        {
            if (!isPrevSpace)   // Same with if(isPreSpace != 1)
            cout << '\n';
            isPrevSpace = 1;
        }
    }
}

int main ()
{
    char str[] = "Good bye everyone,see you    tomorrow!!!";
    printWordByWord(str);

    return 0;
}
