#include <stdio.h>

int main() {
    int matrix[3][3];
    printf("Enter elements of the 3x3 matrix:\n");

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Saddle points:\n");
    for (int i = 0; i < 3; i++) {
        int rowMin = matrix[i][0];
        int colIndex = 0;
        
        for (int j = 1; j < 3; j++) {
            if (matrix[i][j] < rowMin) {
                rowMin = matrix[i][j];
                colIndex = j;
            }
        }

        int isSaddlePoint = 1;
        for (int k = 0; k < 3; k++) {
            if (matrix[k][colIndex] > rowMin) {
                isSaddlePoint = 0;
                break;
            }
        }

        if (isSaddlePoint)
            printf("Saddle point at [%d][%d] = %d\n", i, colIndex, rowMin);
    }

    return 0;
}