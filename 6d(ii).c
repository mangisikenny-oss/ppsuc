#include<stdio.h>
int main()
{
int a[100],n,i,small;
printf("\n Enter no.of elemets you want:");
scanf("%d",&n);
printf("\n Enter %d Elemets:\n",n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("\n The Array elemets are...\n");
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
small=a[0];
for(i=1;i<n;i++)
{
if(a[i]<small)
{
small=a[i];
}
}
printf("\n The smallest value=%d",small);
}
