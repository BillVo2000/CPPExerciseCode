#include <iostream>
#include <string.h>
using namespace std;

void reverse(char str[]) {
    int length = strlen(str);   //length of the input string.
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
    cout << str;
}

int main ()
{
    char str[] = "I love programming";
    reverse(str);
    return 0;
}
