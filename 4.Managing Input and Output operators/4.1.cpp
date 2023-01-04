//READING A CHARACTER FROM TERMINAL
#include<stdio.h>
main()
{
    char answer;
	printf("Would you like to know my name?\n"); 
	printf("Type Y for YES and N for NO: ");
	answer = getchar(); /*Reading a character*/
	if(answer =='Y' || answer =='y')  
	printf("\n\n My name is BUSY BEE \n");
	else 
	printf("\n\nYou are good for nothing \n");

}
