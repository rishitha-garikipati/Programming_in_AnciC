//CONCATENATION OF STRINGS
#include<stdio.h>
#include<string.h>
main()
{
    int i, j,k:
	static char first_name[10] = {"VISWANATH"}; 
	static char second_name[10]= {"PRATAP"};
	static char char name[30];
	last_name[10] = {"SINGH"};
    char name[30];
    for(i O; first_name[i] != '\0'; i++)
	name[i] first_name[i];
	name[i] ='';
	for(j=0; second_name[j] != '\0'; j++)
	name[i+j+1] = second_name[j];
    name[i+j+1] = "';
	for(k 0; last_name[k] != '\0'; k++) 
	name[i+j+k+2] = last_name[k];
	name[i+j+k+2] = '\0';
	printf("\n\n"); printf("%s\n", name);
}
