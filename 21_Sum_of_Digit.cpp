#include<stdio.h>
int main()
{
	int n,b,a;
	printf("Enter any Number :");
	scanf("%d",&n);
	a=0;
	do
	{
		b=n%10;
		a=a+b;
		n=n/10;
	}
	while(n!=0);
	printf("The sum digit are:%d",a);
}
