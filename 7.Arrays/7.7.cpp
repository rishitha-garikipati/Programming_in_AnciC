//PROGRAM TO SORT A LIST AND FIND ITS MEDIAN
#include<stdio.h>
#define N 100
main() 
{
int i,j,h,n;
float median,a[N], t;
printf("Enter the number of items\n"); 
scanf("%d", &n);
printf("Input %d values \n",n); 
for (i = 1; i <= n; i++) 
scanf("%f", &a[i]);
for (i = 1; i<=n-1; i++)
{
for (j=1;j<=n-i; j++)
{
if (a[i] <= a[j+1]) 
{
t = a[j]; 
a[j] = a[j+1]; 
a[j+1] = t;
} 
else
continue;
}
}
if (n % 2 == 0)
median = (a[n/2] + a[n/2+1])/2.0; 
else
median =a[n/2 + 1];
for (i = 1; i <= n; i++)
printf("%f", a[i]); 
printf("\n\nMedian is %f\n", median);
}
