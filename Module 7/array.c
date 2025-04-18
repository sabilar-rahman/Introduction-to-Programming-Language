#include <stdio.h>
int main()
{

    int n;
    printf("Enter the size of array:");
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("Here is the number:%d \n", array[i]);
    }

    return 0;
}