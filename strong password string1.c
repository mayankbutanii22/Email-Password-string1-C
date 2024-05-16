#include<stdio.h>
#include<string.h>
main()
{
    char str[50];
    int x=0;
    int a=0,b=0,c=0,d=0;
     
    printf("Enter a password: ");
    gets(str);
    strlen(str);
 
    for(x=0; str[x]!='\0'; x++){
    	if(str[x]>='a' && str[x]<='z'){
		a++;	
	}else if(str[x]>='A' && str[x]<='Z'){
		b++;
	}else if((str[x]>=33 && str[x]<=47) || (str[x]>=58 && str[x]<=64) || (str[x]>=123 && str[x]<=127)){
		c++;
	}else if(str[x]>=48 && str[x]<=57){
		d++;
	}if(strlen(str)>6 && a>0 && b>0 && c>0 && d>0){
		printf("\nYour password is Strong.");
	}else{
		printf("\nYour password is not Strong.");
	}
}
}


