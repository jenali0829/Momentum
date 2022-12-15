#include<stdio.h>
main(){
	
	char a;
	
	printf("Enter any character:");
	scanf("%c",&a);
	
	if((a>='a'&& a<='z')||(a>='A'&& a<='Z'))
	{
		printf("'%c' is alphabat.",a);
	}
	else if(a>='0' && a<='9')
	{
		printf("'%c'is digit.",a);
	}
	else
	{
		printf("'%c'is special character.",a);
	}
}
