#include <stdio.h>

void calPer(int value, int per){
    if (per >100) {
        return;
    }
    printf("%d Percent = %.2f\n", per, (value * per) / 100.0);
    calPer(value, per+ 1);
}
int main(){
    int value;
    printf("Enter a value to split in percentage: ");
    scanf("%d", &value);
    calPer(value, 1);
    return 0;
}

