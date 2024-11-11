#include <stdio.h>
int main(){
    int matrix[4][4];
    printf("Enter the grades for 4 students in 4 subjects:\n");
    for(int i = 0; i < 4; i++){
        for(int j = 0;j < 4; j++){
            printf("Enter grade for student %d, subject %d: ",i + 1,j + 1);
            scanf("%d", &matrix[i][j]);
            if(matrix[i][j] < 0) {
                matrix[i][j] =0;
           }
        }
    }
    printf("\nUpdated matrix with valid grades:\n");
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}

