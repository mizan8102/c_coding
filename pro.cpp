#include <iostream>
using namespace std;

int main() {
    int a,x,y,p;

	cin >> a;
	x=0;
	p=a;
	do
	{

		y=p%10;
		p=p/10;
		x++;
	}
	while(p!=0);
    cout << x;
    return 0;


}
