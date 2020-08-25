#include <stdio.h>
#include <conio.h>

int main()
{

    int c = 0;

    while((c = getchar()) != EOF){
        if(c == '\t')
            printf("\\t");
        if(c == '\b'){
            putchar('\\');
            putchar('b');
        }   
        if(c == '\\'){
            printf("\\");
        }
            
        putchar(c);
        
        
    }
}