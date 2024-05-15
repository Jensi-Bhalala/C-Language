#include<stdio.h>

main(){
	int a,b,c,d,e;
	
	printf("enter the a number :");
	scanf("%d",&a);
	printf("enter the b number :");
	scanf("%d",&b);
	printf("enter the c number :");
	scanf("%d",&c);
	printf("enter the d number :");
	scanf("%d",&d);
	printf("enter the e number :");
	scanf("%d",&e);
	

	(a>b)
		?((a>c)
			?((a>d)
				?((a>e)?printf("a is max")
					   :printf("e is max"))
				:((d>e)?printf("d is max")
					   :printf("e is max")))
			
			:((c>d)
				?((c>e)?printf("c is max")
					   :printf("e is max"))
				:((d>e)?printf("d is max")
					   :printf("e is max"))))
		:((b>c)
			?((b>d)
				?((b>e)?printf("b is max")
					   : printf("e is max"))
				:((d>e)?printf("d is max")
				       : printf("e is max")))
			:((c>d)
				?((c>e)?printf("c is max")
				       :printf("e is max"))
				:((d>e)?printf("d is max")
				       :printf("e is max"))));

}
