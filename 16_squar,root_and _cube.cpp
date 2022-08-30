/*C program to print square, cube and square root of all numbers from 1 to N.*/
 
#include <stdio.h>
#include <math.h>
 
int main()
{
    int i,n;
 
    printf("Enter the value of N: ");
    scanf("%d",&n);
 
    printf("No     Square   Cube    Square Root\n",n);
    i=0;
    while(i<=n)
    {
    	i++;
        printf("%d \t %ld \t %ld \t %.2f\n",i,(i*i),(i*i*i),sqrt((float)i));
    }
     
    return 0;
}

