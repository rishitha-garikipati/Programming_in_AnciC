//PRINTING SEQUENCES OF CHARACTERS
#include<stdio.h>
main()
{
    int c, d;
	static char string[] = "CProgramming";
	printf("\n\n"); 
	printf("-----------—\n");
	for( c = 0; c <= 11; c++ )
	{
	d=c+ 1;
	printf("%-12.*s\n", d, string);
	}
	printf("-------------\n");
	for(c = 11; c>= 0; c--)
	{
	d = c + 1;
	printf("%-12*s\n", d, string);

}

printf("---------------\n");

}


