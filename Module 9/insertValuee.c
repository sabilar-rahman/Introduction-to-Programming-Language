#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n + 1];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int index, value;
    printf("Enter the index and value: ");
    scanf("%d %d", &index, &value);
    for (int i = n; i >= index + 1; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[index] = value;

    for (int i = 0; i <= n; i++)
    {

        printf("%d ", arr[i]);
    }

    return 0;
}