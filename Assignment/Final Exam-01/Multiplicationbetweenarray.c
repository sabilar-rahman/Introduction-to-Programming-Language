#include <stdio.h>
#include <stdlib.h>
int main()
{
    int numberofTest;
    scanf("%d", &numberofTest);

    while (numberofTest--)
    {
        int n;
        scanf("%d", &n);

        int array[n];
        int copyOfArray[n];

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &array[i]);
            copyOfArray[i] = array[i];
        }

        // selection sort
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (copyOfArray[i] > copyOfArray[j])
                {
                    int temp = copyOfArray[i];
                    copyOfArray[i] = copyOfArray[j];
                    copyOfArray[j] = temp;
                }
            }
        }

        int difference[n];

        for (int i = 0; i < n; i++)
        {
            difference[i] = array[i] - copyOfArray[i];
        }
        // print
        for (int i = 0; i < n; i++)
        {
            printf("%d ", abs(difference[i]));
        }

        printf("\n");
    }

    return 0;
}