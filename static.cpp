#include<stdio.h>
int add(int a,int b);

int pp=20;

int main(){

    int x,y;
    printf("enter value of x:");
    scanf("%d",&x);
     printf("enter value of y:");
    scanf("%d",&y);
    x=add(add(x,y),add(4,1))+add(3,4);
    printf("\nResult is :%d",pp);
}

int add(int a,int b){
int p;
static int m=20;
printf("\nvalue of m is:%d",m);
m=m+10;
printf("\nvalue of m is:%d",m);
p=a+b+m;
int pp=50;
printf("\nAfter call,Result :%d",pp);
return p;



}

