#include<stdio.h>
int main(){
int x,n,b;
scanf("%d",&x);
int ar[x];
for(int i=0;i<x;i++)
{
    scanf("%d",&ar[i]);
}
for(int i=0;i<x;i++)
{
    int a=0;
    n=ar[i];
    int p=n;

    while ( p!=0 )
    {
        b=p%10;
        b=b*b*b;
        a=a+b;
        p=p/10;

    }
    if(n==a){
        printf("%d is an armstrong number!\n",n);
    }
    else{
        printf("%d is not an armstrong number!\n",n);
    }

}

}
