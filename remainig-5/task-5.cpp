#include <stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    (n & 1) == 0 ? printf("%d is even.\n", n) : printf("%d is odd.\n", n);

    return 0;
}


