
/*PRINTING ALPHABET SET IN DECIMAL AND CHARACTER FORM */
#include<stdio.h>
main()
{
    char c;
	printf("\n\n");
	for(c = 65; c <= 122; c = c + 1)
	{
	if( c > 90 && c <97)
	continue;
	printf("5d-%c", c, c);
	}

printf("\n");

}
