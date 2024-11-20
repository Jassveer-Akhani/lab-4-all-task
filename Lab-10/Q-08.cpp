#include <stdio.h>
void print_array(int arr[], int n){
    if (n == 0)
        return;
    printf("%d ", arr[0]);
    print_array(arr + 1, n - 1);
}
int main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Array elements are: ");
    print_array(arr, n);
    printf("\n");

    return 0;
}


