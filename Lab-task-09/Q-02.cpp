#include <stdio.h>
int main(){
    int bol, nut, wash;
    int totalCost;
    printf("Enter the number of bolts:");
    scanf("%d", &bol);
    printf("Enter the number of nuts: ");
    scanf("%d", &nut);
    printf("Enter the number of washers: ");
    scanf("%d", &wash);

    totalCost = (bol * 5)+ (nut *3) +(wash * 1);

    int error = 0; 
    if (nut < bol){
        printf("Check the Order: too few nuts\n");
        error = 1;
    }
    else if(wash <2 * bol){
       printf("Check the Order: too few washers\n");
        error = 1;
    }
    else if(!error){
        printf("Order is OK.\n");
    }
    printf("Total cost: %d cents\n", totalCost);

    return 0;
}



