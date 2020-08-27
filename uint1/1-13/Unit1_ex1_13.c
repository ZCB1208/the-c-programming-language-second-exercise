#include <stdio.h>

int main()
{
    int c,i,j,nwhite,nother;
    int ndigital[10];
    int maxValue = 20;

    nwhite = nother = 0;
    for (i = 0 ; i < 10; i++){
        ndigital[i] = 0;
    }

    while ((c = getchar()) != EOF){
        if (c >= '0' && c <= '9'){
            ++ndigital[c-'0'];
        }
        else if (c == ' ' || c == '\n' || c == '\t'){
            ++nwhite;
        }else{
            ++nother;
        }
    }

    // printf("digits = ");
#if 0
    for(i = 0;i < 10; ++i){
        for(int j = 0; j < ndigital[i]; ++j){
            printf("*");
        }
            printf(" [%d]\n",ndigital[i]);
    }
    // printf(" white space = %d,other = %d\n",
        // nwhite,nother);
#elif 1
    for(i = maxValue; i >0 ; --i){
        printf("\t    ");
        for(j = 0;j < 10;++j){
            if(ndigital[j] == i){
                printf("***\t");
                --ndigital[j];
            }else if(ndigital[j]==i-1){
                printf("[%d]\t",ndigital[j]);
            }
            else
            {
                printf("   \t");
            }                        
        }
        printf("\n");
    }
    printf("\t-----------------------------------vertical view-------------------------------------\n\n");
#endif
}