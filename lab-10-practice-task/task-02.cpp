#include <stdio.h>
int maxPieces(int length) {
    if (length == 0)
        return 0;
    if (length < 0)
        return -1;
    int cut1 = maxPieces(length - 1);
    int cut2 = maxPieces(length - 2);
    int cut3 = maxPieces(length - 3);
    int maxCut = (cut1 > cut2 ? cut1 : cut2);
    maxCut = (maxCut > cut3 ? maxCut : cut3);
    if (maxCut == -1)
        return -1;

    return 1 + maxCut;
}

int main() {
    int length;

    printf("Enter the length of the rope: ");
    scanf("%d", &length);
    int result = maxPieces(length);
    if (result == -1) {
        printf("The rope cannot be cut into pieces of length 1, 2, or 3.\n");
    } else {
        printf("The maximum number of pieces the rope can be cut into is: %d\n", result);
    }

    return 0;
}

