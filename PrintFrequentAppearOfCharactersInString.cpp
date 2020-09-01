#include <iostream>
using namespace std;

void statisticalPrint(char str[])
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
            continue;

        int count = 1;
        for (int j = i + 1; str[j] != '\0'; j++)
        {
            if (str[i] == str[j])
            {
                count++;
                str[j] = ' ';   // this step is to replace the counted character by a space.
            }
        }
        cout << str[i] << '\t' << count << endl;
    }
}

int main ()
{
    char str[] = "The Earth is spherical";
    statisticalPrint(str);

    return 0;
}


