#include <stdio.h>

#define IN  1
#define OUT 0

int main()
{
    int c, n1, nw, nc, state;

    int pre_c;
    int count = 0;

    state = OUT;
    n1 = nw = nc = 0;
    pre_c = 0;

    while ((c = getchar()) != EOF)
    {
        // ++nc;
        if ( (  (c != ' ')  || (pre_c != ' ')  )
                &&
             (  (c != '\t') || (pre_c != '\t') )) {
                 ++nc;
                // putchar(c);
        }
        pre_c = c;        
       
        if(c == '\n'){
            ++n1;
        }
        if(c == ' ' || c == '\n' || c == '\t'){
            state = OUT;
        }
        else if(state == OUT){
            state = IN;
            ++nw;
        }
    }
    printf("%d %d %d\n",n1, nw, nc);
    
}