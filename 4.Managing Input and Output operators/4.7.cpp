//ILLUSTRATION OF %[] SPECIFICATION
#include<stdio.h>
main()
{  
    char address[80];
	printf("Enter address \n"); 
	scanf("%[a-z]", address); 
	printf("%-80s \n\n", address);
}


//ILLUSTRATION OF %[^] SPECIFICATION
#include<stdio.h>
main()
{
    char address[80]; 
	printf("Enter address\n"); 
	scanf("%[^\n]", address); 
	printf("%-80s \n\n", address);
}
