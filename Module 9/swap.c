#include <stdio.h>
int main()
{
    int a = 10, b = 20;
    int temporary =a ;

    a = b;
    b = temporary;
    printf("a=%d b=%d", a, b);
    return 0;
}