
#include <stdio.h>

int sum(int a,int b){

int s=a+b;
return s;

}

int main()
{

    int a,b,result;
    printf("Enter First number:");
    scanf("%d",&a);
    printf("Enter Second number:");
    scanf("%d",&b);
    result=sum(a,b);
    printf("Result is :%d",result);

}

