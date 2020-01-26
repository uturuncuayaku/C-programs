#include <stdio.h>

int strlen1(char *s){
    int i = 0;
    do{
        i++;
    }while(*s++ != '\0');
    
    return i;
}
/* STRCAT1
 *      Concatenate two character arrays with amount of characters
 *      to be concatenated from second array into first array.
 */
char *strncat1(char *firstChar, const char *secondChar, size_t amtChars){
    char *p;                  //creating new array to hold variable amount of characters
    p = firstChar;         // now p holds address of firstChar 
    while(*p != '\0'){// p is advanced until the end of of array.
        ++p;
    }
    for(; amtChars > 0 && *secondChar != '\0'; --amtChars){
        *p++ = *secondChar++;//moving forward while counting down
    }
    *p = '\0';//add a null terminating character
    return firstChar;

}
char *my_strncat(char *s, const char *t, int n)
{
	int i;

	while (*++s)
		;
	for (i = 0; i < n && *(t + i); i++)
		*(s + i) = *(t + i);
	*(s + i) = '\0';

	return s;
}
char *mystrncat(char *s, char *t, size_t n){
    int i;
    int len = strlen1(s);
    for(i = 0; n > 0; i++, n--){
        *(s + len + i) = *t++;//pointer arithmetic is done without dereferencing
    }
    *(s + len + i) = '\0';
    return s;
}
/*  STRNCOPY1
 *      Callee is responsible for providing array because in C      
 *      you can only pass by reference you can't return. 
 *      
//=-=--=--=-==-=--=-=-==--=-=-=-=-=-==--==-=---=-=
*/ 
char *strncopy1( char *copy, const char *inChars, size_t n ){
    char *p;
    p = copy;
    for(; n > 0 && *inChars != '\0'; --n ){
        *p++ = *inChars++;
    }
    /*  Filling rest of character array with \0 or NULL
     *  if amount of characters requested is larger than 
     *  the original size of string.
    */
    for(; n > 0; --n ){
        *p++ = '\0';
    }
    return copy;
}

int main(void){
    char *s = "Hello ";
    char *t;
    strncopy1(t,s,9) ;
    printf("Printing from Copied character Array: %s\n",t);
    printf("Length: %d\n", strlen1(s) );
    printf("=---===-=--=-=-=-=-=-=-=--=-=-=-=-=-=-=-=--=-=-=-\n");
    char *s1="Hello";
    char *w = "World!";
    my_strncat( s1,w, 13);
    printf("%s\n", s1);
return 0;
}



