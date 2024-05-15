#include<stdio.h>
main(){
	
	float firstangle, secondangle, thirdangle;
	
	printf("enter the first angle");
	scanf("%f", &firstangle);
	
	printf("enter the second angle");
	scanf("%f", &secondangle);
	
	thirdangle = 180 - (firstangle + secondangle);
	printf("thirdangle: %f\n", thirdangle);
	
	
	
}
