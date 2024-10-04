#include <stdio.h>
int main() {
    int n;
    do {
        printf("Enter a positive number: ");
        scanf("%d", &n);
        if (n <= 0) {
            printf("not a positive number.\n");
        }
    } while (n <= 0);
    printf("You entered: %d\n", n);
    
    return 0;
}

