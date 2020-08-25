#include <stdio.h>

int main()
{
    int c,line,space,title;

    line = 0;
    space = 0;
    title = 0;

    while ((c = getchar()) != EOF)
    {
        if(c == '\n')
            ++line;
        if(c == '\t')
            ++title;
        if(c== ' ')
            ++space;
    }
    printf("line = %d, title = %d, space = %d\n",line,title,space);
    
}