#include<stdio.h>
int main()
{
int a[10][10],b[10][10],c[10][10],r1,c1,r2,c2,i,j,k;
printf("\nEnter no.of rows & columns into Matrix A:");
scanf("%d%d",&r1,&c1);
printf("\nEnter no.of rows & columns into Matrix B:");
scanf("%d%d",&r2,&c2);
//checking Multiplication Condition
if(c1==r2)
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
//Reading Elements into Matrix B
printf("\nEnter %d Elements into Matrix B:",(r2*c2));
for(i=0;i<r2;i++)
{
for(j=0;j<c2;j++)
{
scanf("%d",&b[i][j]);
}
}
//Printing Matrix A
printf("\nMatrix A is....\n");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
printf("\t%d",a[i][j]);
}
printf("\n");
}
//Printing Matrix B
printf("\nMatrix B is....\n");
for(i=0;i<r2;i++)
{
for(j=0;j<c2;j++)
{
printf("\t%d",b[i][j]);
}
printf("\n");
}
//Matrices Multiplication Logic
for(i=0;i<r1;i++)
{
for(j=0;j<c2;j++)
{
c[i][j]=0;
for(k=0;k<c1;k++)
{
c[i][j]=c[i][j]+a[i][k]*b[k][j];
}
}
}
//Printing multiplication Matrix C
printf("\nMatrices C is.....\n");
for(i=0;i<r1;i++)
{
for(j=0;j<c2;j++)
{
printf("\t%d",c[i][j]);
}
printf("\n");
}
}//if closing
else
{
printf("\nMatrix Multiplication is not possible");
}
}
