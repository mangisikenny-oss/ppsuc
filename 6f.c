#include<stdio.h>
int main()
{
int n, a[20], pos, i;
printf("Enter size of the Array: ");
scanf("%d", &n);
printf("Enter array elements:\n");
for(i = 0; i < n; i++)
{
scanf("%d", &a[i]);
}
printf("Enter the position of the element to delete: ");
scanf("%d", &pos);
// Shift elements left
for(i = pos - 1; i < n - 1; i++)
{
a[i] = a[i + 1];
}
n--; // Decrease the size
printf("\nAfter deletion, Array elements are:\n");
for(i = 0; i < n; i++)
{
printf("%d\t", a[i]);
}
return 0;
}
