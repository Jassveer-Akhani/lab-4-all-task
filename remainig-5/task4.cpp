#include <stdio.h>
int main() {
    float pa;
    int hm;
    printf("Enter total purchase amount: ");
    scanf("%f", &pa);
    printf("Do you have a membership. 1 for Yes, 0 for No : ");
    scanf("%d", &hm);
    (pa > 100 && hm == 1) ? printf("Eligible for discount\n") : printf("Not eligible for discount\n");

    return 0;
}

