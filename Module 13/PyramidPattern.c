#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int star = 1;
    int space = n - 1;
    for (int i = 1; i <= n; i++) // for printing lines
    {
        for (int j = 1; j <= space; j++) // for printing spaces
        {
            printf(" ");
        }
        for (int j = 1; j <= star; j++) // for star
        {
            printf("*");
        }
        printf("\n");
        star += 2;
        space--;
    }
    return 0;
}