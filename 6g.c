#include<stdio.h>
int main()
{
int a[100],n,i,j,temp;
printf("\nEnter Array Size:\n");
scanf("%d",&n);
printf("\nEnter %d Elements",n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("\nArray Elements Before Swapping....\n");
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
//Bubble Sort logic
for(i=0;i<n-1;i++)
{
for(j=0;j<n-1-i;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
//Printing Sorting Array
printf("\nThe Array Elements after sorting....\n ");
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
return 0;
}
