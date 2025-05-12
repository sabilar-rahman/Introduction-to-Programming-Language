#include <stdio.h>
void hello(int n)
{
    if (n == 5)
    {
        return;
    }
   

    printf("%d\n", n);
    hello(n + 1);
}

int main()
{

    int n = 1;
    hello(n);
    return 0;
}