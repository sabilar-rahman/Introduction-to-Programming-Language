#include <stdio.h>
int main()
{
   int a=5,b=1,c=3;

    if(a>b && b>c)
    {
        printf("a is the largest number %d",a);
    }
    else if(b>a && c>b)
    {
        printf("b is the largest number %d",b);
    }
    else
    {
        printf("c is the largest number %d",c);
    }
    return 0;
}