#include<stdio.h>

int main(void)
{
    int ARow,ACol,BCol,i,j,k;

    printf("Welcome to 2D matrix multiplication solver\n");
    printf("This program will take matrix A and matrix B as input and show the result of A x B\n\n");

    printf("Enter the row number of A: ");
    scanf("%d", &ARow);
    printf("Enter the column number of A: ");
    scanf("%d", &ACol);
    printf("Enter the column number of B: ");
    scanf("%d", &BCol);

    int A[ARow][ACol];
    int B[ACol][BCol];
    int AB[ARow][BCol];

    printf("Give the inputs for matrix A: \n");
    for(i = 0; i < ARow; i++){
        for(j = 0; j < ACol; j++){
            printf("Input for row %d col %d: ",i+1,j+1);
            scanf("%d", &A[i][j]);
        }
    }

    printf("\n");

    printf("Give the inputs for matrix B: \n");
    for(i = 0; i < ACol; i++){
        for(j = 0; j < BCol; j++){
            printf("Input for row %d col %d: ",i+1,j+1);
            scanf("%d", &B[i][j]);
        }
    }

    printf("\n");

    printf("Matrix A: \n");
    for(i = 0; i < ARow; i++){
        for(j = 0; j < ACol; j++){
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    printf("Matrix B: \n");
    for(i = 0; i < ACol; i++){
        for(j = 0; j < BCol; j++){
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }

    for(i = 0; i < ARow; i++){
        for(j = 0; j < BCol; j++){
            AB[i][j] = 0;
            for(k = 0; k < ACol; k++){
                AB[i][j] += (A[i][k]*B[k][j]);
            }
        }
    }

    printf("\n");

    printf("Matrix AB: \n");
    for(i = 0; i < ARow; i++){
        for(j = 0; j < BCol; j++){
            printf("%d ",AB[i][j]);
        }
        printf("\n");
    }

    return 0;
}
