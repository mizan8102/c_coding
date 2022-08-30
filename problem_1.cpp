#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    long long ar[a];
    for(int i=0;i!=a;i++){
        scanf("%lld",&ar[i]);
    }
    for(int i=0;i!=a;i++){
        if((ar[i]%2)==0){
            printf("even\n");
        }
        else{
            printf("odd\n");
        }

    }
}
