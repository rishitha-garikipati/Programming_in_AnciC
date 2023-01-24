//ILLUSTRATIONS OF STRING-HANDLING FUNCTIONS 
#include<string.h>
#include<stdio.h>
main() 
{
    char  s1[20], s2[20], s3[20]; 
	int  X, l1, l2,l3;
	printf("\n\nEnter two string constants \n");
	printf("?");
	scanf("%s %s", s1, s2); 
	X = strcmp(s1, s2);
	if(X!= 0)
	{ 
	printf("\n\nStrings are not equal \n"); 
	strcat(s1, s2);
	} 
	else
	printf("\n\nStrings are equal \n");
	strcpy(s3, s1);
	l1 =strlen(s1); 
	l2 = strlen(s2);
	l3 = strlen(s3);
	printf("\ns1 = %s\t length = %d characters\n", s1, l1);
	printf("s2 = %s\t length = %d characters \n", s2, l2);
	printf("s3=%s\t length =%d characters\n", s3, l3);

}

