#include <stdio.h>
int main(){
    int matrix[4][4];
    printf("Enter the elements of the 4x4 matrix (scores for each team and round):\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j< 4; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
    for(int j = 0; j < 4; j++){
        for (int i = 0; i < 4 - 1; i++){
            for (int k = i + 1; k < 4; k++) {
                if (matrix[i][j] > matrix[k][j]) {
                    int temp = matrix[i][j];
                    matrix[i][j] = matrix[k][j];
                    matrix[k][j] = temp;
              }
          }
        }
    }
    printf("Matrix after sorting each column in ascending order:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

