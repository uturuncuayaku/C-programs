
char strcat(char *s, char *t){
  int lengthS = strlen(s);
  int lengthT = strlen(t);
  char n[lengthS+lengthT + 1];
  if( *s == '\0' || *t == '\0') return n;
  int i;
  for( i = 0; i < lengthS; i++ ){
    if(*s[i] == '\0') break;
    n[i] = s[i];
  }
  for( i = 0; i < lengthT; i++){
    n[lengthS+i] = *t[i];
  }
  n[i] = '\0';
  return n;
}
