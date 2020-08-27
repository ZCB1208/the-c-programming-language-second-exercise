#include <stdio.h>

#define MAXLENGTH 1000
#define THRESHOLD 80

int getline(char [],int);
void copy(char [],char []);

int main()
{
    int len,max=0;
    char line[MAXLENGTH],longest[MAXLENGTH];

    while(getchar() != EOF){
        while((len=getline(line,MAXLENGTH))>0){
            if(len > THRESHOLD){
                printf("the %d's start : %s\n",THRESHOLD,&line[THRESHOLD-1]);
            }
            break;
        }
    }
    
    return 0;
}

int getline(char line[],int limit)
{
    int i,c;
    for(i=0; i< limit-1 && ( ( (c=getchar()) != EOF) && (c!='\n') ); i++)
        line[i]=c;
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

void copy(char to[],char from[])
{
    int i=0;
    while((to[i]=from[i])!='\0')
        ++i;
}