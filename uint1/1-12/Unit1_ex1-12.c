#include <stdio.h>

#define IN  1
#define OUT 0

int main()
{
    int c;
    int pre_c;
    int state;
    
    state = IN;
    c = 0;
    pre_c = 0;

    while ((c = getchar()) != EOF)
    {   
        if( c != ' ' && c != '\t' && c != '\n'){
            if(pre_c != ' ' && pre_c != '\t' && pre_c != '\n'){
                putchar(c);
            }
        }
        if(c != ' ' && c != '\t' && c != '\n'){
            if(pre_c == ' ' || pre_c == '\t' || pre_c == '\n'){
                putchar('\n');
                putchar(c);
            }
        }
        pre_c = c;
    }   
}