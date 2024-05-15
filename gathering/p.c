#include<stdio.h>


int inputint()
{
	int n;
	scanf("%d",&n);
	
	return n;
}

int arrayinput(int size, int arr[])
{
	int i;
	for(i=0; i<size; i++){
		printf("enter element %d :",i+1);
		arr[i] = inputint();
		
	}
}
	
int arrayoutput(int size, int arr[]){
	int i;
	for(i=0; i<size; i++)
	{
		printf("%d \t",arr[i]);
		int sum=sumofallelements(size, arr);
    	printf("sum of all elements %d",sum);
	}		
}	

int main(){
	int size;
	printf("enter the number of elements");
	inputint();
}

