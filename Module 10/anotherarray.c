// Copy elements from 2 arrays to another array

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int array1[n];
    int array2[n];
    int array3[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array1[i]);
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array2[i]);
    }
    for (int i = 0; i < n; i++)
    {
        array3[i] = array1[i] + array2[i];
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array3[i]);
    }
    return 0;
}