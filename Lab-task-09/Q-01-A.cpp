#include<stdio.h>
void printNumberPattern(int N) {
    int i, j;
    for (i = 1; i <= N; i++){
        for(j = 1; j <= i; j++){
            printf("%d", j);
        }
        for (j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }
        printf("\n");
    }
}
int main(){
    int N;
    printf("Enter a number for pattern: ");
    scanf("%d", &N);
    printNumberPattern(N);

    return 0;
}

