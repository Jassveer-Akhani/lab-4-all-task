#include <stdio.h>
int main(){
    int n[15]; 
    int sum = 0;   
    int i;
    printf("Enter 15 numbers:\n");

    for(i = 0; i < 15; i++){
        printf("Number %d: ", i + 1);
        scanf("%d", &n[i]);}
    for(i = 0; i < 15; i++){
        sum += n[i];
    }
    printf("The sum of the elements is: %d\n", sum);

    return 0;
}

