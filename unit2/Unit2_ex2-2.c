#include <stdio.h>

#define LIMIT 10
int main()
{
    int c = 0;
    int i = 0;
    int lim = LIMIT;
    char s[LIMIT] = {};

    while((c = getchar()) != EOF)
    {
        if(c != '\n')
        {
            if(i < lim-1){
                i++;
                s[i] = c;
                putchar(s[i]);
            }
        }
    }
    s[i]='\0';
    putchar(s[i]);
}