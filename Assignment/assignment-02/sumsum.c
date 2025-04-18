/* Problem Statement

You will be given a positive integer N and N numbers after that. You need to tell the sum of positive numbers and the sum of negative numbers separated by a space.

Input Format

First line will contain N.
Second line will contain N values named V.
Constraints

1 <= N <= 10^5
-1000 <= V <= 1000
Output Format

Output the sum of positive numbers first, then sum of negative numbers.
Sample Input 0

6
5 -3 9 -10 2 8
Sample Output 0

24 -13
Sample Input 1

4
1 0 -5 3
Sample Output 1

4 -5 */

// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);

//     int array[n];
//     int sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &array[i]);
//         if (array[i] > 0)
//         {
//             sum = sum + array[i];
//         }
//     }
//     printf("%d ", sum);

//     sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &array[i]);
//         if (array[i] < 0)
//         {
//             sum = sum + array[i];
//             if (i == n - 1)
//             {
//                 printf("%d", sum);
//     }
//         }
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);

//     int array[n];
//     int sum = 0;
//     if (n > 0)
//     {
//         for (int i = 0; i < n; i++)
//         {
//             scanf("%d", &array[i]);
//             sum = sum + array[i];
//         }
//         printf("%d", sum);
//     }
//     else if (n < 0)
//     {
//         for (int i = 0; i < n; i++)
//         {
//             scanf("%d", &array[i]);
//             sum = sum + array[i];
//         }
//         printf("%d", sum);
//     }

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int n;
//     scanf("%d", &n);

//     int array[n];
//     int positiveSum = 0;
//     int negativeSum = 0;

//     for (int i = 0; i < n; i++) {
//         scanf("%d", &array[i]);
//         if (array[i] > 0) {
//             positiveSum += array[i];
//         } else if (array[i] < 0) {
//             negativeSum += array[i];
//         }
//         // Ignore zero as it's neither positive nor negative
//     }

//     printf("%d %d\n", positiveSum, negativeSum);

//     return 0;
// }

#include <stdio.h>

int main()
{
    int n, pos = 0, neg = 0;
    scanf("%d", &n);

    int array[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
        if (array[i] > 0)
        {
            pos += array[i];
        }
        else if (array[i] < 0)
        {
            neg += array[i];
        }
        
    }

    printf("%d %d\n", pos, neg);

    return 0;
}