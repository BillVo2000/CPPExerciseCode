#include <iostream>
using namespace std;

void deleteAllCharacter(char str[], char key) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == key) {
            for (int j = i; str[j] != '\0'; j++) {
                str[j] = str[j + 1];
            }
            i--;
        }
    }
    cout << str;
}

int main()
{
	char key = 'l';
	char str[] = "Hello World!!";
    deleteAllCharacter(str, key);

	return 0;
}

