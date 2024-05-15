#include<stdio.h>
main(){
	
	int a, b ,choice;
	printf("enter the number of a: ");
	scanf("%d",&a);
	printf("enter the number of b: ");
	scanf("%d",&b);
	printf("press1 for addition \t press2 for substraction \t press3 for multiplication \t press4 for division \n");
	printf("enter the number of choice: ");
	scanf("%d",&choice);
	
	
	switch(choice)
	{
		case 1:
			printf("%d + %d = %d" ,a,b,a+b);
			break;
			
		case 2:
			printf("%d - %d = %d" ,a,b,a-b);
			break;
			
		case 3:
			printf("%d * %d = %d" ,a,b,a*b);
			break;
			
		case 4:
			printf("%d / %d = %d" ,a,b,a/b);
			break;
			
		default:
			printf("enter your valid choice");
			

	}
	
	
}
