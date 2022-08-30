#include<stdio.h>
int main()
{
	int n,x,z,y;
	printf("Enter any number:");
	scanf("%d",&n);
	printf("The number are\n");
	while(x!=n)
	{
		x++;
		y=0;
		z=1;
		while(y!=x)
		{
			y++;
			z=z*x;
		}
		printf("%d\n",z);
	}
}
