 #include <stdio.h>
 
 int main (){
 	float oriamount, disamount, finamount;
 	
   	printf("Enter the shoping amount: ");
 	scanf("%f", &oriamount);
 	
 	if (oriamount < 1500){
 		disamount = oriamount * 0.07;
 		finamount = oriamount - disamount;
 		printf("Oringinal Amount is %.2f\n", oriamount);
 		printf("Saved Amount is %.2f\n", disamount);
 		printf("Final Amount is %.2f\n", finamount);
	 } 
	 else if (oriamount <= 3000){
	 	disamount = oriamount * 0.12;
	 	finamount = oriamount - disamount;
	 	printf("Oringinal Amount is %.2f\n", oriamount);
 		printf("Saved Amount is %.2f\n", disamount);
 		printf("Final Amount is %.2f\n", finamount);
	 	
	 }
	  else if (oriamount <= 5000){
	 	disamount = oriamount * 0.22;
	 	finamount = oriamount - disamount;
	 	printf("Oringinal Amount is %.2f\n", oriamount);
 		printf("Saved Amount is %.2f\n", disamount);
 		printf("Final Amount is %.2f\n", finamount);
	 }
	  else {
	 	disamount = oriamount * 0.3;
	 	finamount = oriamount - disamount;
	 	printf("Oringinal Amount is %.2f\n", oriamount);
 		printf("Saved Amount is %.2f\n", disamount);
 		printf("Final Amount is %.2f\n", finamount);
	 }
	 
 	return 0;
 }
 
 
