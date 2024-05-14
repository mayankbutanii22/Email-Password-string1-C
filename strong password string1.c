#include<stdio.h>
#include<string.h>
main()
{
    char str[50];
    int x=0;
     
    printf("Enter a password: ");
    scanf("%s", &str);
    strlen(str);
        for (x=0; x<1; x++){
        	if(strlen(str)>7){
            if((str[x]>='a' && str[x]<='z') || (str[x]>='A' && str[x]<='Z')  || (str[x]>='0' && str[x]<='9')){
                str[x]= str[x] +32 + 'A'-'a';
              	printf("\nYour password is Strong. ");
        }
           }else{
		        printf("\nYour password is not Strong. ");  
        }
    }
}


