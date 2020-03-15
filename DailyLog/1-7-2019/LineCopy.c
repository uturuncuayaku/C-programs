#include <stdio.h>
#define MAXLINE 1000    /* max input line length */

int getline(char line[], int maxline);
void copy(char to[], char from[]);
//print the longest input line
int main(){
    int length; // current line length
    int max;    // max length seen
    char line[MAXLINE]; // current input line
    char longest[MAXLINE]; // longest line saved here
    max =  0;
    while((length = getline(line,MAXLINE)) > 0){
        if(length > max ){
            max = length;
            copy(longest,line);

        }
    }
    if(max > 0){// there was a line
        printf("%s", longest);
    }
    return 0;

}
//read a line into s and return length
int getline(char s[], int lim){
    int c, i;
    for(i=0; i < lim-1 & (c=getchar()) != EOF &c!='\n';++i){
        s[i] = c;
    }
    if(c == '\n'){
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}
void copy(char to[], char from[]){
    int i;
    i = 0;
    while((to[i] = from[i]) != '\0'){
        ++i;
    }
}
