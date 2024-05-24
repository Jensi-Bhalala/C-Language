#include<stdio.h>

main()

{
	int hindi,guj,maths,eng,sci,sum,grade;
	
	printf("enter your hindi marks:");
	scanf("%d",&hindi);
	
	printf("enter your guj marks:");
	scanf("%d",&guj);
	
	printf("enter your maths marks:");
	scanf("%d",&maths);
	
	printf("enter your eng marks:");
	scanf("%d",&eng);
	
	printf("enter your sci marks:");
	scanf("%d",&sci);
	
	
	sum = hindi + guj + maths + eng + sci;
	
	printf("%d",sum);
	
	
	
	
	float avg = sum*100/500;
	printf("\n\n avg:%.2f",avg);


}




