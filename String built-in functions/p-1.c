


#include<stdio.h>
main(){
	
	int i, length, upr=0, lwr=0, num=0, spe=0;
	char pswd[10];
	printf("enter your password :");
	gets(pswd);
	
	length = strlen(pswd);
	printf("%d", length);
	
	for(i=0; i<length; i++){
		if(pswd[i]<=65 && pswd[i]>=90)upr++;
		if(pswd[i]<=97 && pswd[i]>=122)lwr++;
		if(pswd[i]<=48 && pswd[i]>=57)num++;
		if(pswd[i]=='@' || pswd[i]=='#')spe++;
	}
	
	if(upr>=0 && lwr>=0 && num>=0 && spe>=0)
	{
		printf("your password is strong");	
	}
	else
	{
		printf("your password is weak");	
	}
	
}
