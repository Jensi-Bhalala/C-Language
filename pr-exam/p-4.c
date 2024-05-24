
#include<stdio.h>
void main()
{
	int a;
	int *ptr;
	ptr = &a;
	
	printf("Enter the any number : ");
	scanf("%d",&a);
	
	
	int arr[a],i;
	
	for(i=0;i<a;i++){
		printf("arr[%d]",i);
		scanf("%d",&arr[i]);
	}
	
	if(a%=1)
	{
		printf("number is even");
	}
	
	else
	{
		printf("number is not even");
	}
	

}
