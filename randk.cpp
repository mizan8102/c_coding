

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


char *replaceWord(const char *s, const char *oldW,const char *newW)
{
    char *result;
    int i, cnt = 0;
    int newWlen = strlen(newW);
    int oldWlen = strlen(oldW);


    for (i = 0; s[i] != '\0'; i++)
    {
        if (strstr(&s[i], oldW) == &s[i])
        {
            cnt++;


            i += oldWlen - 1;
        }
    }


    result = (char *)malloc(i + cnt * (newWlen - oldWlen) + 1);

    i = 0;
    while (*s)
    {

        if (strstr(s, oldW) == s)
        {
            strcpy(&result[i], newW);
            i += newWlen;
            s += oldWlen;
        }
        else
            result[i++] = *s++;
    }

    result[i] = '\0';
    return result;
}


int main()
{
    char str[200] ;
    gets(str);
    char c[] = ".";
    char d[] = "-";

    char *result = NULL;




    result = replaceWord(str, c, d);
    printf("%s", result);

    free(result);
    return 0;
}
