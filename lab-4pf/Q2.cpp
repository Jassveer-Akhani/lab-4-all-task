 #include <stdio.h>
  int main () {
	float unit, bill=0.0, s_charge;
	
	printf("Enter the units :");
	scanf("%f", &unit);
	
	if (unit <= 30){
		bill = unit * 0.60;
	}
	  else if (unit <= 110){
		bill = (39 * 0.60) + ((unit - 30) * 0.85);
	} 
	  else if (unit <= 210){
		bill = (30 * 0.60) + (80 * 0.85) + ((unit - 110) * 1.60);
	} 
	  else {
		bill = (30 * 0.60) + (80 * 0.85) + (100 * 1.30) + ((unit - 210 ) * 1.60);
	}
	
	s_charge = bill * 0.15;
	bill += s_charge;
	
	printf("Total Electricity bill with surcharge: %.2f\n", bill);
	
	 return 0;
}


