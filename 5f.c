#include<stdio.h>
int main()
{
int i, j, n;
scanf("%d",&n);
for(i = 1; i <= n; i++) // outer loop rows
{
for(j = 1; j <= n; j++) // inner loop columns
{
printf("%d ", j);
}
printf("\n"); // move to next line after each row
}
return 0;
}
