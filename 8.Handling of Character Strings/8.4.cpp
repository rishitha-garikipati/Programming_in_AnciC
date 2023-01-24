//WRITING STRINGS USING % FORMAT
#include<stdio.h>
main() 
{
    static char country[15] = "United Kingdom";
	printf("\n\n"); 
	printf(" - \n");
	printf("% 15s\n", country);
	printf("%s\n", country); 
	printf("% 15.6s \n", country);
	printf("%-15.6s|\n", country);
	printf("% 15.0s \n", country); 
	printf("%.3s\n", country);
	printf("%s\n", country);
	 printf("\n");

} 
