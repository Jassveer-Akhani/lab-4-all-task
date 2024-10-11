#include <stdio.h>
int main(){
    int n[20];
    int i;
    printf("Enter 20 numbers:\n");
    for(i = 0; i < 20; i++){
        printf("Number %d: ", i + 1);
        scanf("%d", &n[i]);
    }
    printf("The numbers in reverse order are:\n");
    for(i = 19; i >= 0; i--){
        printf("%d ", n[i]);
    }
    printf("\n");

    return 0;
}


