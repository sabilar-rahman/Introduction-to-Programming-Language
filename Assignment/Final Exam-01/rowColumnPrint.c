#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int row, column;
    scanf("%d %d", &row, &column);
    int matrix[row][column];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    int spe_row = row-1; // last row

    for (int j = 0; j < column; j++)
    {
        printf("%d ", matrix[spe_row][j]);
    }
    printf("\n");

    int spe_column = column-1; // last column
    for (int j = 0; j < row; j++)
    {
        printf("%d ", matrix[j][spe_column]);
    }
    printf("\n");
    return 0;
}

