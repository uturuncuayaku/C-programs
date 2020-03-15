//strlen: return length of string
int strlen(char *s){
  char *p = s;
  while(*p != '\0';
  {
    p++;
  }
  return p-s;
}

//strcpy copy t to s
void strcpy(char *s, char *t){
  int i;
  i = 0;
  while((s[i] = t[i] != '\0')
    i++;
}

void strc(char *s, char *t){
  while((*s++ = *t++) != '\0')
    ;
}
void strc(char *s, char *t){
  while( (*s++ = *t++) )
    ;
}
/*
strcmp:
  returns
    0 if s<t,
    0 if s ==t
    >0 if s>t
*/
int strcmp(char *s, char *t){
  int i;
  for(i=0; s[i] == t[i]; i++){
    if(s[i] == '\0')
      return 0;
  }
  return *s - *t;
}

/*

*/
int strcmp(char *s, char *t){
  for( ; *s == *t; s++, t++)
    if(*s == '\0')
      return 0;
  return *s-*t;
}

Things learned:
Incrementing pointers
  Dereferencing pointers
Anagrams
  sorting
  string pairs
Hash tables
