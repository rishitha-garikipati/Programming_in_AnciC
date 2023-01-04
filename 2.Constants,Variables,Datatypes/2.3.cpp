//Fig 2.3 Representation of integer constants
/*INTEGER NUMBERS ON 16-BIT MACHINE*/
#include<stdio.h>
main()
{
	
    printf("Integer values\n\n");
    printf("%d %d %d\n", 32767,32767+1,32767+10); 
	printf("\n");
    printf("Long integer values\n\n");
    printf("%ld %ld %ld\n", 32767L,32767L+1L, 32767L+10L);
}
