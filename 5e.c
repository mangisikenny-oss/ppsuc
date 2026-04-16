#include<stdio.h>
int main()
{
int n, r, t, rev = 0;
scanf("%d", &n); //Enter any Number
t = n; // Store original number
printf("The given number = %d", n);
// Reverse the number
while(n > 0)
{
r = n % 10; // Get last digit
rev = rev * 10 + r; // Build reverse number
n = n / 10; // Remove last digit
}
printf("\nThe reverse value = %d", rev);
// Check palindrome
if(t == rev)
{
printf("\n%d is a palindrome", t);
}
else
{
printf("\n%d is not a palindrome", t);
}
return 0;
}
