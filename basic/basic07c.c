#include <stdio.h>
#define MAXLINE 100

int getLine(char [], int);
void copyLine(char [],char []);

int main() {

    int max, current_len;
    char current_line[MAXLINE];
    char longest[MAXLINE];
    max = 0;

    while((current_len = getLine(current_line, MAXLINE))>0){
        if(current_len>max){
            max=current_len;
            copyLine(longest, current_line);
        }
    }

    if(max>0)
        printf("%s", longest);
    
    return 0;
}

int getLine(char line[], int maxLen){

    int c, i;
    for(i = 0; (i< maxLen-1) && ((c=getchar())!=EOF) && (c!='\n'); ++i)
        line[i] = c;
     
    if(c == '\n'){
        line[i]=c;
        ++i;
    }

    line[i] = '\0';
    return i;
}

void copyLine(char to[],char from[]){

    int i;
    i =0;      
    while( (to[i] = from[i]) != '\0')
        ++i;
    
    return;
}