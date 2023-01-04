//PRINTING OF MULTIPLICATION TABLE
#include<stdio.h>
#define COLMAX 10 
#define ROWMAX 12
main()
{
int row,column, y;
row = 1; 
printf("MULTIPLICATION TABLE               \n");
printf(" -----------------------------------\n");
/*......OUTER LOOP BEGINS........*/
do {
column = 1;
/*.......INNER LOOP BEGINS......*/
do;
y = row* column;
printf("%4d", y); 
column = column + 1;

while (column <= COLMAX); 
/*... INNER LOOP ENDS...*/
printf("\n");
row row + 1;
}
while (row <= ROWMAX); 
/*......OUTER LOOP ENDS....*/

printf("-------------------------------------\n");
}
