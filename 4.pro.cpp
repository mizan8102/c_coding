#include <iostream>
using namespace std;

int main() {
int m=0;
int a;
cin >> a;
int sum=0;
for(int i=1;i<=a;i++){

    if(a%i==0){
        sum=sum+i;
        m++;
    }
}
cout << sum;
if(m<=2){
    cout << "\nPrime";
}else{
    cout << "\nNot Prime";

}

}
