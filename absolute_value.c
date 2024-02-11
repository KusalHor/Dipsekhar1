//wap to print absolute value of a number.
#include<stdio.h>
int main()
{
	int n,x;
	printf("Enter a number : ");
	scanf("%d",&n);
	if(n>0)
	{
		x=n;
		printf("Absolute value of %d is = %d",n,x);
	}
	else
	{
		x=n*(-1);
		printf("Absolute value of %d is = %d",n,x);
	}
	return 0;
}
