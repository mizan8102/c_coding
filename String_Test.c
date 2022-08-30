#include <stdio.h>
int main()
{
    char name[50];

    fgets(name,sizeof(name),stdin);  // read string

    puts(name);    // display string
    return 0;

}
