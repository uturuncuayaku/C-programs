void strcat( char s[], char t[] ){
  int i,j;
  i= j= 0;
  while(s[i] !='\0') //find end of s
    i++;
  while(s[i++] = t[j++]) != '\0')
    ;

}

void strcat( char *s, char *t){
  int i, j;
  i= j= 0;

  while( *s++ != '\0')
    i++;
    ;

  while(*(s+i+j) = *(t+j) != '\0')
    j++;
    ;
}

void strcat(char *s, char *t){
  int i, j;
  i= j= 0;
  while(*(s+i) != '\0')
    i++;
  while((*(s+i+j) = *(t+j) != '\0')
    j++;
}
