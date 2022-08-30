#include<stdio.h>
int main()
{
    int b;
  for(;b<=5;b++)
  {

       for(int i=1000;i!=0;i--)
        {
            b++;
            printf("\t%d",i);
            if(b==5)
            {
                printf("\n");
                goto at;
            }

        }



  }



}
