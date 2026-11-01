// Date : 01 - 11 - 2026
// Task 1 :- Store one 2D array in another by doing Row reverse
// i/p => {{3, 5 , 7}, {11, 9, 21}}
// o/p => {{11, 9, 21}, {3, 5, 7}}

#include <stdio.h>

int main(){

    int i, j, z[2][3];
    int y[][3] = {3, 5, 7, 11, 9, 21};

    int row_size = sizeof(y) / sizeof(y[0]);
    int col_size = sizeof(y[0]) / sizeof(y[0][0]);

    printf("--------------- Input Array -----------------\n\n");

    // Printing 2D Array in y variable
    for(i = 0; i < row_size; i++){
        for(j = 0; j < col_size; j++)
            printf("%d ", y[i][j]);
        printf("\n");
    }

    // Doing row reverse and storing 2D Array in z variable
    for(i = 0; i < row_size; i++){
        for(j = 0; j < col_size; j++)
            z[i][j] = y[row_size - 1 - i][j];
    }

    printf("\n--------------- Output Result ---------------\n\n");

    // Printing 2D Array in z variable
    for(i = 0; i < row_size; i++){
        for(j = 0; j < col_size; j++)
            printf("%d ", z[i][j]);
        printf("\n");
    }

    return 0;
}