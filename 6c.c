#include<stdio.h>
int main()
{
int a[100],n,i,se;
printf("\nEnter array size:");
scanf("%d",&n);
printf("\nEnter %d Elements into the Array\n",n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("\nEnter Search element:");
scanf("%d",&se);
//Linear search logic
for(i=0;i<n;i++)
{
if(a[i]==se)
{
printf("\nSearch element found at location %d",i);
break;
}
}
if(i==n)
{
printf("\n Search element not found");
}
return 0;
}
