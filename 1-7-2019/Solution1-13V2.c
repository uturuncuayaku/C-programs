

#include <stdio.h>
#define MAX 10
#define IN 1
#define OUT 0

int main(void){
    int c, len, state;
    int nlength[MAX];

    c = len = 0;
    state = IN;

    for(int i = 0; i < MAX; ++i)
        nlength[i] = 0;

    while ((c = getchar()) != EOF) {
        ++len;
        if (c == ' ' || c == '\n' || c == '\t') {
            --len;
            state = OUT;
        }
        if(state == OUT) {
            if(len != 0 && len <= MAX)
                ++nlength[len-1];

            len = 0;
            state = IN;
        }
    }
    int max = 0;
    //horizontal
    for (int i = 0; i < MAX; ++i) {
        if(max < nlength[i]) max = nlength[i];
        printf("%2d ", i+1);
        for (int a = 0; a < nlength[i]; ++a)
            printf("*");

        printf("\n");
    }
    printf("\n");
    //vertical
    for (int i = max; i > 0; --i){
        for (int j = 0; j < MAX; ++j)
            if(nlength[j]>=i)
                printf("%c ", '*');
            else
                printf("%c ", ' ');
        printf("\n");
    }
    for(int i=1;i<=MAX;++i)
        printf("%-2d", i);

    return 0;
}
