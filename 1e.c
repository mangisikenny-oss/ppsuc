#include <stdio.h>
int main()
{
	int num;
	float f;
	char ch;
	char str[100];
//reading input
scanf("%d",&num);
scanf("%f",&f);
scanf(" %c",&ch);   //space before %c to avoid new line
scanf("%s",str);
//printing output
printf("interger:%d\n",num);
printf("float:%2f\n",f);
printf("character:%c\n",ch);
printf("string:%s",str);
return 0;
}
