#include <stdio.h>
int main() {
    int number;
    int sum = 0;
    printf("Enter numbers to add to the sum (enter 0 to stop):\n");
    while (1) {
        printf("Enter a number: ");
        scanf("%d", &number);

        if (number == 0) {
            break; 
        }
        sum += number; 
        printf("Current sum: %d\n", sum); 
    }
    printf("Final sum: %d\n", sum); 
    
    return 0;
}

