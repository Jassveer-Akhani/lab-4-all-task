#include <stdio.h>

int main() {
    int n, i = 2;

    printf("Enter a number (>= 1): ");
    scanf("%d", &n);
    if (n >= 1) {
        while (i <= n) {
            printf("%d ", i);
            i += 2;
        }
        printf("\n");
    } else {
        printf("Number must be >= 1\n");
    }
    return 0;
}

