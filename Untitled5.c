#include<stdio.h>
int main()
{
   int a;
scanf("%d",&a);
    if(a<0)
        {
         printf("you  are Banned");
        }else if(a%2==0){printf(" Number:%d is Even",a);}
    else{printf("Number:%d is Odd",a);}
    return 0;
}


