#include <stdio.h>


#define MAX_BUFFER 1024
#define TAB 7

int main()
{
    int c,i,x;
    char temp[MAX_BUFFER];

    i = 0;
    x = 0;
    for(int j = 0;j < MAX_BUFFER; ++j){
        temp[j] = 0;
    }

    while((c = getchar()) != EOF){
        temp[x] = c;
        i++;
        ++x;

        if(c == '\n')
            i = 0;
        if(c == '\t'){
            while ((i % TAB) != 0)
            {
                putchar(' ');
                i++;
            } 
        }else{
            putchar(c);
        }
    }
    for(int y = 0; y < x; ++y){
        putchar(temp[y]);
    }
    return(0);
}