/*
Exercise 5-5 in K&R, page 107
Write versions of
  strncpy, strncat, strncmp

Prototype:
  void strncpy(char *s, char *t, size_t n);
  void strncat(char *s, char *t, size_t n);
  int strcmp(char *s, char *t, size)t n);

*/

void strncpy(char *s, char *t, size_t n){
  if(strlen(s) < n)
    char *p;
    for( int i = 0; i<n; i++ ){ *p++ = *t++; }

    *p++ = '\0';




}
