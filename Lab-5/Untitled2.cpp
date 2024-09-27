#include <stdio.h>
int main (){
	int age;
	char c;
	printf("Do you have citizenship of Pakistan type y for yes n for No: ");
	scanf("%c", &c);
	printf("Enter Your age; ");
	scanf("%d", &age);
	if  (c == 'y' && age >= 18){
		printf("you are eligible for vote");
		} 
		else {
			printf("you are not eligible for vote");
		}
		return  0;
}




