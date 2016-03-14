#include<stdio.h>
#include<string.h>

main(void) {
	char buff[4];
	int validNum = 0;
	
	printf("\n Enter last four digits of your SSN: \n");
	gets(buff);
	
	
	if(strcmp(buff, "1234")) {
		printf("\n You are not who you say you are. \n");	
	}
	else {
		printf("\n You have been verified. \n");
		validNum = 1;	
	}
	
	if(validNum) {
		printf("\n You have access to personal data. \n");	
	}
	
	return 0;
}
