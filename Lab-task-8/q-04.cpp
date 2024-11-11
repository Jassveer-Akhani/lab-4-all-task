#include <stdio.h>
int main() {
    int m, n;
    printf("Enter the number of rows (m): ");
    scanf("%d", &m);
    printf("Enter the number of columns (n): ");
    scanf("%d", &n);
    
    int matrix1[m][n], matrix2[m][n], result[m][n];
    printf("Enter elements of the first matrix:\n");
    for(int i = 0; i< m; i++) {
        for(int j = 0; j < n; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix1[i][j]);
    }
    }
    printf("Enter elements of the second matrix:\n");
    for(int i = 0; i < m; i++) {
        for (int j = 0; j< n; j++) {
            printf("Element [%d][%d]: ", i + 1,j + 1);
            scanf("%d", &matrix2[i][j]);
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            result[i][j] = matrix1[i][j] +matrix2[i][j];
        }
    }
    printf("Resulting matrix after addition:\n");
    for(int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

