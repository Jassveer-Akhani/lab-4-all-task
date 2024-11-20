#include <stdio.h>
int sum_dig(int n) {
    if (n == 0)
        return 0;
    return n % 10 + sum_dig(n / 10);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Sum of digits: %d\n", sum_dig(num));
    return 0;
}

