#include <stdio.h>
int main() {
    int num, count = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num & 1) count++;   
    if (num & 2) count++;   
    if (num & 4) count++;   
    if (num & 8) count++;   
    if (num & 16) count++;  
    if (num & 32) count++;  
    if (num & 64) count++;  
    if (num & 128) count++; 
    if (num & 256) count++; 
    if (num & 512) count++; 
    if (num & 1024) count++; 
    if (num & 2048) count++; 
    if (num & 4096) count++; 
    if (num & 8192) count++; 
    if (num & 16384) count++; 
    if (num & 32768) count++; 
    if (num & 65536) count++; 
    if (num & 131072) count++; 
    if (num & 262144) count++; 
    if (num & 524288) count++; 
    if (num & 1048576) count++; 
    if (num & 2097152) count++; 
    if (num & 4194304) count++; 
    if (num & 8388608) count++; 
    if (num & 16777216) count++; 
    if (num & 33554432) count++; 
    if (num & 67108864) count++; 
    if (num & 134217728) count++; 
    if (num & 268435456) count++; 
    if (num & 536870912) count++;
    if (num & 1073741824) count++; 
    if (num & 2147483648) count++; 
    printf("The number of 1s in the binary representation is: %d\n", count);

    return 0;
}

