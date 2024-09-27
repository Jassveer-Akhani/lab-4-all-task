#include <stdio.h>
int main (){
	int a, b, c;
	printf("enter angle a: ");
	scanf("%d", &a);
	printf(" Enter Angle b: ");
	scanf("%d", &b);
	printf("Enter Angle c: ");
	scanf("%d", &c);
	int total;
	total = a + b + c;
	if  (total == 180 && a >= 0 && b >= 0 && c>= 0){
		printf("its a valid triangle");
		} 
		else {
			printf("not a valid triangle");
		}
		return  0;
}





