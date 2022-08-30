// Amostrong Number
#include<stdio.h>
int main()
{
	int n,a,x,y,p,mm;

	printf("Enter value of mm:");
	scanf("%d",&mm);
	int ar[mm];

	for(int i=0;i!=mm;i++){

        scanf("%d",&ar[i]);
	}

	for(int i=0;i!=mm;i++){
            if(ar[i] %2==0){
                printf("even number");
            }else{
                printf("odd number");

            }

	}

}
