//Insert an element into an array
#include<stdio.h>
int main()
{
int n, a[20], pos, ele, i;
printf("Enter size of the Array: ");
scanf("%d", &n);
printf("Enter array elements:\n");
for(i = 0; i < n; i++)
{
scanf("%d", &a[i]);
}
printf("Enter the position at which element is to be inserted: ");
scanf("%d", &pos);
printf("Enter the element to insert: ");
scanf("%d", &ele);
// Shift elements to the right
for(i = n; i >= pos; i--)
{
a[i] = a[i - 1];
}
// Insert the new element
a[pos - 1] = ele;
n++; // Increase the size
printf("\nAfter insertion, Array elements are:\n");
for(i = 0; i < n; i++)
{
printf("%d\t", a[i]);
}
return 0;
}
