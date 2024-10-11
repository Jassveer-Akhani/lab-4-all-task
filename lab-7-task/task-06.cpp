#include <stdio.h>
int main(){
    int num[30]; 
    int i;
    int min, max;
    printf("Enter 30 numbers:\n");
    for(i = 0; i < 30; i++) {
        scanf("%d", &num[i]); 
    }
    min = num[0];
    max = num[0];
    for(i = 1; i < 30; i++){
        if (num[i] < min){
            min = num[i]; 
        }
        if(num[i] > max){
            max = num[i]; 
        }
    }
    printf("Minimum number: %d\n", min);
    printf("Maximum number: %d\n", max);

    return 0;
}


