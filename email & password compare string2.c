#include<stdio.h>
#include<string.h>
main()
{
	char username[50];
	char password[50];
	int x=0,y=0;
	
	printf("Enter the username: ");
    scanf("%s",&username[x]);

	printf("\nEnter the password: ");
	scanf("%s",&password[y]);
   
     for(x=0; x<1; x++){
     	for(y=0; y<1; y++){
     if(strcmp(username,"admin@gmail.com")==0 || strcmp(password,"password")==0){
     		printf("\nUser successfully logged in...");	 
	
		}else{
		
			printf("\nLogin Failed. Invalid Credentials.");
		}
	}
}
}
