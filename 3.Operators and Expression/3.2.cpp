//PROGRAM TO SHOW USE OF SHORTHAND OPERATOR

#define  N 100
#define  A  2
#include<stdio.h>
main()
{
    int a;
	a = A; 
	while( a < N)
	{
	printf("%d\n", a); 
	a *= a;
    }
}
