#include<stdio.h>
int main()
{
	int n,x=0,p,sum=0;
	printf("Enter any number:");
	scanf("%d",&n);
	printf("The even number sum are:\n");
	do
	{
		x++;
		if(x%2==0)
		{
			p=x;
			sum=sum+p;
		}
		
	}while(x<=n);
		printf("%d\n",sum);
}
