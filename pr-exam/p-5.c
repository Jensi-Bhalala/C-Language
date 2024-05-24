
#include<stdio.h>
#include<string.h>

struct company{
	
	
    char companyname[50];
    int price;
    int processer;
    
    
};

void main (){
	
	int n;
	printf("Number of laptop: ");
	scanf("%d",&n);
	
	struct company s1[n];
	
	int i;
	
	for(i = 0; i < n; i++){
	
        fflush(stdin);
        printf("company Name: ");
        gets(s1[i].companyname);
        
        printf(" processer: ");
        scanf("%d", &s1[i].processer);
        
    
        printf("price: ");
        scanf("%d", &s1[i].price);
        
        
	}
	
	printf("\n\n");
	printf("company Name\t processer\t price");
	printf("\n\n------------\t ---------\t ------");
	
	for(i = 0; i < n; i++){
		printf("\n\n%s\t\t %d\t\t \%d\n",s1[i].companyname,s1[i].processer,s1[i].price);
	}
}


