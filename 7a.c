#include<stdio.h>
int main()
{
int a[10][10],b[10][10],r1,c1,r2,c2,i,j,c[10][10];
printf("\nEnter the order of Matrix A:");
scanf("\n%d%d",&r1,&c1);
printf("\nEnter the order of Matrix B:");
scanf("\n%d%d",&r2,&c2);
if(r1==r2 && c1==c2)
{
//Reading Elements into Matrix A
printf("\nEnter %d Elements into Matrix A:",(r1*c1));
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("\nEnter %d Elements into Matrix B:",(r2*c2));
for(i=0;i<r2;i++)
{
for(j=0;j<c2;j++)
{
scanf("%d",&b[i][j]);
}
}
//printing Matrix A....
printf("\nMatrix A is...\n");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n"); 
}
//printing Matrix B....
printf("\nMatrix B is...\n");
for(i=0;i<r2;i++)
{
for(j=0;j<c2;j++)
{
printf("%d\t",b[i][j]);
}
printf("\n"); 
}
//Addition logic....
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
c[i][j]=a[i][j]+b[i][j];
}
}
//Printing Matrices C
printf("\nMatrix C is...\n");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
printf("%d\t",c[i][j]);
}
printf("\n"); 
}
}//closing if
else
{
printf("\nMatrices Addition is not Possible");
}
return 0;
}
