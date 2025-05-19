// Problem Statement

// Given the multiplication of four numbers and three of those numbers, find the missing number.

// Note: If the missing number could not be found for the given input, print -1. All numbers are non-negative integers.

// Input Format

// The first line will contain T, number of test cases.
// For every test case, the input will contain one integer M (the multiplication of the four numbers), A, B, C (three of those four numbers).
// Constraints

// 1 < T <= 100000
// 0 <= M <= 10^18
// 1 <= A, B, C <= 10^6
// Output Format

// Print the missing number. Don't forget to print a new line after it.
// Sample Input 0

// 4
// 20 1 2 2
// 10 2 2 1
// 1 1 2 3
// 0 3 10 15
// Sample Output 0

// 5
// -1
// -1
// 0

// #include <stdio.h>
// int main()
// {
//     int t;
//     scanf("%d", &t);
//     for (int i = 0; i < t; i++)
//     {
//         int m, a, b, c;
//         scanf("%d %d %d %d", &m, &a, &b, &c);
//         if (m == a * b * c)
//             printf("%d\n", (a + b + c) - (a * b + b * c + c * a));
//         else
//             printf("-1\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int numberOfTestCases;
//     scanf("%d", &numberOfTestCases);

//     while (numberOfTestCases--)
//     {
//         int m, a, b, c;
//         scanf("%d %d %d %d", &m, &a, &b, &c);

//         int temp;
//         if (temp = m / (a * b * c))
//         {
//             printf("%d\n", temp);
//         }
//         else
//         {
//             printf("-1\n");
//         }
//     }
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int numberOfTestCases;
//     scanf("%d", &numberOfTestCases);

//     while (numberOfTestCases--)
//     {
//         int m, a, b, c;
//         scanf("%d %d %d %d", &m, &a, &b, &c);

//         int temp = m / (a * b * c);
//         if (temp > 0)
//         {
//             printf("%d\n", temp);
//         }
//         else
//         {
//             printf("-1\n");
//         }
//     }
//     return 0;
// }

int main()
{
    int numberOfTestCases;
    scanf("%d", &numberOfTestCases);

    while (numberOfTestCases--)
    {
        long long m, a, b, c;
        scanf("%lld %lld %lld %lld", &m, &a, &b, &c);

        long long divisor = a * b * c;
      long long missingNumber = m / divisor;
        // Avoid if 0 
        if (divisor == 0) {          
            printf("-1\n");
        } else if (m % divisor == 0) {
            printf("%lld\n",missingNumber );
        } else {
            printf("-1\n");
        }
    }
    return 0;
}