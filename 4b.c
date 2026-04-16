#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,r1,r2,d;
	printf("Enter a value:");
	scanf("%f",&a);
	printf("Enter b value:");
	scanf("%f",&b);	
	printf("Enter c value:");
	scanf("%f",&c);
	d=b*b-4*a*c;
	if(d==0)
	{
		printf("The roots are real and equal\n");
		r1=b/(2*a);
		r2=-b/(2*a);
		printf("root1=%2f\n",r1);
		printf("root2=%2f\n",r2);
	}
	else if(d>0)
	{
		prinft("The roots are real and different\n");
		r1=(-b+sqrt(d))/(2*a);
		r2=(-b-sqrt(d))/(2*a);
		printf("root1=%2f\n",r1);
		printf("root2=%2f\n",r2);
	}
	else
	{
		printf("Roots are imaginary");
	}
}
