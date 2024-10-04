#include <stdio.h>
int main() {
    int n, i, p = 1; 
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n < 2) {
        p = 0; 
    } else {
        for (i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                p = 0; 
                break; 
            }
        }
    }
    if (p) {
        printf("%d is a prime number.\n", n);
        int a = 0, b = 1, next;
        printf("Fibonacci series %d: ", n);
        
        while (a <= n) {
            printf("%d ", a);
            next = a + b;
            a = b;
            b = next;
        }
        printf("\n");
    } else {
        printf("%d is not a prime number.\n", n);
    }
    
    return 0;
}

