#include<stdio.h>
main(){
	
	int a;
	printf("enter the value number:");
	scanf("%d",&a);
	
	int arr[a],i;
	
	for(i=0;i<a;i++){
		printf("arr[%d]",i);
		scanf("%d",&arr[i]);
	}
	
	
	for(i=0;i<=a;i++)
	{
		if(arr[i]%2==0)
	{
		printf("number is odd");
	}
	
	else
	{
		printf("number is not odd");
	}
	}
	
}
