#include<stdio.h>
int main()
{
 int a[3][3], n, i, j, trace = 0;
 printf("Enter order of matrix: ");
 scanf("%d", &n);
 printf("Enter %d elements of Matrix\n", (n*n));
 for(i = 0; i < n; i++)
 {
 for(j = 0; j < n; j++)
 {
 scanf("%d", &a[i][i]);
 }
 }
 // Calculate trace (sum of diagonal elements)
 for(i = 0; i < n; i++)
 {
 trace = trace + a[i][i]; 
 }
 printf("Sum of Diagonal Elements = %d", trace);
 return 0;
}
