#include <stdio.h>

#define ANNOTATION_ONE_1 '/'
#define ANNOTATION_ONE_2 '/'

#define ANNOTATION_WHOLE_S_1 '/'
#define ANNOTATION_WHOLE_S_2 '*'

#define ANNOTATION_WHOLE_E_1 '*'
#define ANNOTATION_WHOLE_E_2 '/'

int main()
{
    int c;
    int start_flag,end_flag,one_flag,whole_flag;

    c = 0;
    start_flag =0;
    end_flag = 0;
    one_flag = 0;
    whole_flag = 0;

    while((c = getchar()) != EOF){
        
        if(c == ANNOTATION_ONE_1 || c == ANNOTATION_WHOLE_S_1 )
            start_flag = 1;
        if(c == ANNOTATION_WHOLE_E_1)
            end_flag = 1;
        
        if(start_flag == 1){
            if(c == ANNOTATION_ONE_2)
                one_flag = 1;
            else if(c == ANNOTATION_WHOLE_S_2)
                whole_flag = 1;
        }

        if(c == '\n')
            one_flag = 0;

        if(end_flag == 1){
            if(c == ANNOTATION_WHOLE_E_2)
                whole_flag = 0;
        }

        if(one_flag == 1 || whole_flag == 1){
            putchar(' ');
        }

        if(one_flag == 0 && whole_flag == 0){
            putchar(c);
        }
    }
}
