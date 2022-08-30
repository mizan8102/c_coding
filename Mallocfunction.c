#include<stdio.h>
int main()
{
    int ar[5];
    ar[1]=5;
    printf("%d\n",ar[1]);
    //use malloc function
    int *p;
    p=(int *)malloc(5* sizeof(int));
    p[1]=5;
    printf("%d",p[1]);


}
