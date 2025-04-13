#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int N;
    scanf("%d", &N);
    if (N > 1000)
    {
        printf("I will buy Punjabi\n");
        N = N - 1000;

        if (N >= 500)
        {
            printf("I will buy new shoes\n");
            printf("Alisa will buy new shoes\n");
        }
    }
    // else if (N <= 500)
    // {
    //     printf("I will buy new shoes");
    //     printf("I will buy new shoes");
    // }
    else
    {
        printf("Bad luck!");
    }

    return 0;
}