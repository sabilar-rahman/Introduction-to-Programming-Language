/* Problem Statement

You will be given a matrix of size N * M. You need to tell if it is Jadu Matrix or not.

Note: A Jadu Matrix is a square matrix, where the values of primary diagonal and secondary diagonal are 1. Rest of the cell will contain only 0.

Input Format

First line will contain N, the row and M, the column of the matrix.
Then the N * M sized matrix will be given.
Constraints

1 <= N, M <= 100
0 <= Values <= 100
Output Format

Ouput "YES" if the matrix is Jadu Matrix, otherwise output "NO" without the quotation marks.
Sample Input 0

5 5
1 0 0 0 1
0 1 0 1 0
0 0 1 0 0
0 1 0 1 0
1 0 0 0 1
Sample Output 0

YES
Sample Input 1

5 5
1 0 0 0 1
0 1 0 1 0
0 0 0 0 0
0 1 0 1 0
1 0 0 0 1
Sample Output 1

NO
Sample Input 2

5 5
1 0 0 0 1
0 1 0 1 0
0 0 1 0 1
0 1 0 1 0
1 0 0 0 1
Sample Output 2

NO
Sample Input 3

5 5
2 0 0 0 1
0 1 0 1 0
0 0 1 0 0
0 1 0 1 0
1 0 0 0 1
Sample Output 3

NO
Sample Input 4

6 6
1 0 0 0 0 1
0 1 0 0 1 0
0 0 1 1 0 0
0 0 1 1 0 0
0 1 0 0 1 0
1 0 0 0 0 1
Sample Output 4

YES
 */
#include <stdio.h>
#include <stdbool.h>

int main()
{
    int row, column;
    scanf("%d %d", &row, &column);
    int a[row][column];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    bool flag = true;
    // int flag = 1;

     if (row == column)
    {
    for (int i = 0; i < row && flag; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (i == j || i + j == row - 1)
            {
                if (a[i][j] != 1)
                {
                    // flag = 0;
                flag = false;
                    break;
                }
            }
            else
            {
                if (a[i][j] != 0)
                {
                    // flag = 0;
                     flag = false;
                    break;
                }
            }
        }
    }
    if (flag)
        printf("YES");
    else
        printf("NO");
    }
    return 0;
}