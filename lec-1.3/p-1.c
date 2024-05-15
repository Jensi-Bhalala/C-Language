#include<stdio.h>
main(){
	
	int a;
	printf("enter your grade : \n");
	scanf("%d" ,&a);
	
	if(a<=50){
		printf("your grade is fail");
		
	}
	
	else if(a<=80){
		printf("your grade is B+");
	}
	
	else{
		printf("your grade is A+");
	}
}
