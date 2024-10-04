#include <stdio.h>
int main (){
	int n, i;
	unsigned long long fact = 1; 
	printf("Enter the value of n: ");
	scanf("%d", &n);
	if (n , 0) {
		printf("factorial in not defined for negative numbers \n");
	} else {
		for (i = 1; i <= n; i++){
			fact *=i;
		} 
		printf("Factorial for %d = %llu\n", n, fact);
	}
	return 0;
	
}

