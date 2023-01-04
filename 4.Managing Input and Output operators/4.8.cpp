//TESTING FOR CORRECTNESS OF INPUT DATA
#include<stdio.h>
main()
{
    int a; 
	float b;
	char c;
	printf("Enter values of a, b and c\n");
	if (scanf("%d %f %c", &a, &b, &c) == 3) 
	printf("a %d b = %f c = %c\n", a, b, c); 
	else
	printf("Error in input.\n");
}
