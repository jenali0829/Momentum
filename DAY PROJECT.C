#include<stdio.h>
main(){
	
	char a;
	printf("INFO ABOUT INPUT:");
	printf("M=monday\n T=tuesday\n W=wednesday\n t=thursday\n F=friday\n S=saturday\n s=sunday\n\n");
	
	printf("ENTER THE INPUT:");
	scanf("%c",&a);
	
	switch(a){
		
		default:
			printf("Invalid input");
			break;
			
			case 'M':
			printf("monday");
			break;
			
			case 'T':
				printf("tuesday");
				break;
				
				case 'W':
					printf("wednesday");
					break;
					
					case 't':
						printf("thursday");
						break;
						
						case 'F':
							printf("friday");
							break;
							
							case 'S':
								printf("saturday");
								break;
								
								case 's':
									printf("sunday");
									break;
		
	
}
}
