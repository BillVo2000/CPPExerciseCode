#include <stdio.h>
#include <math.h>

int main ()
{
   int a = 25, b = 5, c = 10, d = 7;

    printf("a %% b = %i \n", a%b);
    printf("a %% c = %i \n", a%c);
    printf("a %% d = %i \n", a%d);
    printf("a / d * d + a %% d = %i \n", a / d * d + a % d);

    return 0;
}


/*Cho a = 25, b = 5, c = 10, d = 7. Viết chương trình in ra màn hình định dạng sau:
Output:
a % b = 0
a % c = 5
a % d = 4
a / d * d + a % d = 25*/
