#include <stdio.h>

int main()
{
    // int input_c,output_c,pre_char_c;

    // int space_count_all,space_count_now;
    // int count  = 0;
    // int space_count = 0;
    // int have_space_flag = 0;

    // space_count_all = 0;
    // space_count_now = 0;

    // while ((input_c = getchar()) != EOF)
    // {
    //     // ++count;
    //     // if( input_c == ' ' && output_c != ' '){
    //     //     output_c = input_c;
    //     // }
    //     // if((input_c != ' ') && (output_c != ' ')){
    //     //     output_c = input_c;
            
    //     // }else if(input_c == ' '){
    //     //     if(output_c != ' '){
    //     //         output_c = input_c;
    //     //     }    
    //     // }

    //     // if(input_c != ' ')
    //     // {
    //     //     output_c = input_c;
    //     // }else{
    //     //     if(output_c == ' '){

    //     //     }else{
    //     //         output_c = input_c;
    //     //     }
    //     // }
    //      int c, p;

   
       
    //    putchar(output_c);
        
    // }

    int c,p;
     while ((c = getchar()) != EOF) {
        if (c != ' ' || (p != ' ')) {
            putchar(c);
        }

        p = c;
    }
    
    
}