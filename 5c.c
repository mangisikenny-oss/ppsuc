#include<stdio.h>
int main()
{
int n, i, count = 0;
scanf("%d", &n);
for(i = 1; i <= n; i++) // check divisibility from 1 to n
{
if(n % i == 0)
{
count++;
// if remainder is 0, i is a factor
// count number of factors
}
}
if(count == 2)
{
// prime numbers have only 2 factors (1 and itself)
printf("%d is Prime number",n);
}
else
{
}
printf("%d is NOT a Prime number",n);
return 0;
}
