#include<stdio.h>
#include<string.h>

int main()
{
    int i,p=0;
    int a;
    scanf("%d",&a);
    char c[a],temp;
    printf("Enter your name:");
    gets(c);
    i=0;
    p=strlen(c)-1;
    while(i<p)
    {
        temp=c[i];
        c[i]=c[p];
        c[p]=temp;
        i++;
        p--;
    }
    puts(c);


}

