#include <stdio.h>
#define MAXLENGTH 1000

int getline(char line[],int limit);
void reverse(char s[],char g[],int len);

int main()
{
    int c,len,i;
    char line[MAXLENGTH],longest[MAXLENGTH],prfline[MAXLENGTH];

    while((len = getline(line,MAXLENGTH)) > 0){
        reverse(line,prfline,len); //通过 reverse 函数执行交换动作，将line[] 中的字符串倒序复制到prfline[]中
        for(i = 0; i < len; i++){
            putchar(prfline[i]);
        }
        break;
    }
    printf("\nlen gth= %d\n",len);
    
}

void reverse(char s[],char g[],int len)
{
    int i = 0;

    for(i = 0; i < len; i++)
        g[i] = s[len-2-i];
}

int getline(char line[],int limit)
{
    int i,c;
    for(i=0; i< limit-1 && ( ( (c=getchar()) != EOF) && (c!='\n') ); ++i){
        line[i]=c;
        // printf("[%d]= %c",i,line[i]);
    }
    putchar('\n');
    if(i==(limit-1)){
        while((c=getchar())!='\n'){
            ++i;
        }
    }
    if(c=='\n'){        
        line[i]=c;
        ++i;
    }
    line[i]='\0';       
    return i;
}