#include <stdio.h>
int main() {
    int n, oN, dig, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    oN = n;
    while (n > 0) {
        dig = n % 10; 
        sum = sum + (dig * dig * dig); 
        n = n / 10; 
    }
    if (oN == sum) {
        printf("%d is an Armstrong number.\n", oN);
    } else {
        printf("%d is not an Armstrong number.\n", oN);
    }

    return 0;
}

