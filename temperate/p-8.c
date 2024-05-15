#include<stdio.h>
main(){
	int choice;
	printf("\t\t\t\t********************************\n");
	printf("\t\t\t\t*********Surat Vala Cafe********\n");
	printf("\t\t\t\t********************************\n");
	printf("press 1 for Pizza\n");
	printf("press 2 for Burgar\n");
	printf("press 3 for Panipuri\n");
	printf("press 4 for dahipuri\n");
	printf("press 5 for Frenki\n");
	printf("press 6 for vadapav\n");
	printf("Enter your choice:");
	scanf("%d",&choice);
	
	switch(choice){
		case 1:
			printf("Enjoy your Pizza");
		break;
	    case 2:
			printf("Enjoy your Burgar");
		break;
		case 3:
			printf("Enjoy your Panipuri");
		break;
		case 4:
			printf("Enjoy your dahipuri");
		break;
		case 5:
			printf("Enjoy your Frenki");
		break;
		case 6:
			printf("Enjoy your Vadapav");
		break;
		default:
			printf("plese enter your valid choice");  
    }
}
