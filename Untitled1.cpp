#include <stdio.h>

int sm(int a, int b) {
    // Hint: Type return a+b; below
    a=a+b;
    return a;
}

int main() {
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    int sum = sm(num1,num2);
    printf("%d",sum);
    return 0;
}
