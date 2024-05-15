#include<stdio.h>
main(){
	int a;
	printf("enter the number : \n");
	scanf("%d" ,&a);
	
	if(a==0){
		printf("your number is zero");
	}
	
	else if(a>0){
		printf("your number is positive");
	}
	
	else{
		printf("your number is negative");
	}
}
