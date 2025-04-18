#include <stdio.h>
int main()
{
    int sum = 0;
    int n ;
    printf("Enter the size of array:");
    scanf("%d", &n);

    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
        sum = sum + array[i];
    }
    printf("Summation: %d", sum);
   
    return 0;
}