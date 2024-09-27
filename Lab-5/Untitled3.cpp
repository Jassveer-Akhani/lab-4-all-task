#include <stdio.h>
int main() {
    float per;
    char gr;
    printf("Enter your percentage: ");
    scanf("%f", &per);
    gr = (per >= 90) ? 'A' :
         (per >= 80) ? 'B' :
         (per >= 70) ? 'C' :
        (per >= 60) ? 'D' : 'F';
    printf("Your grade is: %c\n", gr);

    return 0;
}




