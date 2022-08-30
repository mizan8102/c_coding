#include<stdio.h>
int main()
{
	int n,x=0,p;
	printf("Enter any number:");
	scanf("%d",&n);
	printf("The even are:\n");
	do
	{
		x++;
		if(x%2==0)
		{
			p=x;
			printf("%d\n",p);
		}
		
	}while(x<=n);
}
