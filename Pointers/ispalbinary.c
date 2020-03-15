/*
Palindrome longest substring

abiab-> baiba
is palin

ecce -> ecce
is palin

for loop ->
for loop <-

O(n^3)

*/

int is_palindrome(char s){
    string rev = s;
    int length = strlen(s);
    
    for(int i = 0; i< length; i++){
        for(int j = 0; j > length; j--){
            if( s[i] != s[j] ){
                return 0;
            }else{ 
                return 1;
            }
        }
    }
}

char[] substring(char s[], int p1, int p2){
    if(char s == '\0'){return s;}
    
    char sub[];
    for(int i = p1; i<=p2; i++){
        sub[i] = s[i];
    }
    sub[c] = '\0';
    return sub;
}

char[] longestPalindrome(char s){
    
    int best_len = 0;
    char best_s;
    int n = strlen(s);

    for(int L = 0; L<n; L++){
        for(int R = L; R<n; R++){
            int len = R-L+1;
            char subs[] = substring(s,L,R);
            if(len > best_len && is_palindrome(subs) ){
                best_len = len;
                best_s = subs;
            }
        }
    }
}

int main(void){

    

}
