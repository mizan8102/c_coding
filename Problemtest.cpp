#include <stdio.h>
#include <math.h>

void main()
{

    int s, a, b, c,d;
    double area;


    scanf("%d %d %d", &a, &b, &c);
    /* compute s */
    if((a+b)>c && (b+c)>a && (c+a)>b)
    {
         s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("%.2lf", area);
    }
   else{
    printf("Oh, No!");
   }
}
