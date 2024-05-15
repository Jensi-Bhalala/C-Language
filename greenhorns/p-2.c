#include<stdio.h>
main(){
	
	int salary, HRA, DA, TA, grows;
	
	printf("enter your salary:");
	scanf("%d" ,&salary);
	
	HRA = (10*100)/salary;
	DA = (5*100)/salary;
	TA = (8*100)/salary;
	
	
	grows = salary + HRA + DA + TA;
	
	printf("your grows salary is %d" ,grows);
}
