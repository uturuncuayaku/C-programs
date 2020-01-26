//returns index of t in s
int strcmp( char *s, char *t){
  while(*s++ == *t++){
    if(*s == '\0') ){
      return 0;
    }
  return *s - *t;

}

/* strlen: return length of string s */
int strlen(char *s){
  int n;
  for (n = 0; *s != '\0', s++)
  n++;
  return n;
}

int strend(char *s, char *t){
  int length_ofT = strlen(t);
  int length_ofS = strlen(s);

  //advance s pointer
  s += length_ofS - length_ofT;
  if(strcmp(s, t) == 0){
    return 1;
  }


}
