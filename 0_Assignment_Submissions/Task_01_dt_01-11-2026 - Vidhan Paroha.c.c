// Task 1

#include <stdio.h>

int main()
{

    int y[2][3] = {{3, 5, 7}, {11, 9, 21}};
    int i, j, z[2][3];

    int row_size = sizeof(y) / sizeof(y[0]);
    int col_size = sizeof(y[0]) / sizeof(y[0][0]);

    for (i = 0; i < row_size; i++)
    {
        for (j = 0; j < col_size; j++)
        {
            z[1 - i][j] = y[i][j];
        }
    }
    for (i = 0; i < row_size; i++)
    {
        for (j = 0; j < col_size; j++)
        {
            printf("%d ", z[i][j]);
        }
        printf("\n");
    }

    return 0;
}
