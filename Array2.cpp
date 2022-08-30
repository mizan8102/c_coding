#include<iostream>
using namespace std;
int main() {
    int a;
    int c = 0, count = 0;
    cin >> a;
   string animals[a] ;
   for(int i=0; i < a; i++){
    cin >> animals[i];
   }
    //The

   for (int i = 0; i < a; i++){
    while (animals[i] != '\0') {
    if (animals[i] == 'a' || animals[i] == 'A' || animals[i] == 'e' || animals[i] == 'E' || animals[i] == 'i' || animals[i] == 'I' || animals[i] =='o' || animals[i]=='O' || animals[i] == 'u' || animals[i] == 'U'){
        cout << 'true';
    }
    else{
        cout << 'false';
    }
      c++;
      }

   }
   }



