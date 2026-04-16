#include<stdio.h>
int main()
{
int start, end, i, j, count;
scanf("%d%d", &start, &end);
printf("Prime numbers between %d and %d are:\n", start,
end);
for(i = start; i <= end; i++) // check each number
{
count = 0;
for(j = 1; j <= i; j++) // count factors of i
{
if(i % j == 0)
{
count++;
}
}
if(count == 2) // prime if exactly 2 factors
{
printf("%d\n", i);
}
}
return 0;
}
