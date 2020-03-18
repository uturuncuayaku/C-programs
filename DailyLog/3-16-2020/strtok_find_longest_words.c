#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
	char answer[1024][1024];
	char test1[] = "run,barn,yellow,barracuda,shark,fish,swim";
	char *test2 = "fishes,sam,gollum,sauron,frodo,balrog";
	char *test3 = "rUnNiNg,swimming, eating,biking, climbing";
	char *test4 = "america,america";

	int length = 0;
	int max_length = 0;
	
	int ans_word = 0;
	int ans_length = 0;
	int firstword = 0;
	char *endptr = NULL;
	char *startptr = NULL;
	
	char *save = test4;

	do
   	{
//		printf("String at startptr: %s\n", save);
		
		if (*test4 != ',')
		{
		//	printf("Character at test4:%c\n",(*test4));	
			answer[ans_word][ans_length] = *test4;
		//	printf("Answer-ROW:%d\nAnswer-COL:%d\n", ans_word, ans_length);
		//	printf("2d array:%c\n", answer[ans_word][ans_length]);
			ans_length++;

		}
//		putchar('\n');
		if (*test4 == ',' || *(test4 + 1) == '\0')
		{
			answer[ans_word][ans_length] = '\0';
			ans_length++;
			ans_word++;
			
printf("2d-array:%s\n", answer);
printf("Test4-string:%s\n",save);
			test4++;
printf("Endptr:%s\n",endptr);
			length = ans_length - 1;
			ans_length = 0;		
		
			printf("Length: %d\n", length);
		//	printf("Starting Address of test4 string: %p\n", startptr);
		//	printf("Ending Address of test4 string: %p\n", endptr);
			firstword = 1;
		}

		if (length > max_length)
		{
	//		printf("Found larger word: %s\n", test4);
			ans_word = 0;
			ans_length = 0;
			answer[ans_word][ans_length] = *test4;
		}
		if (length == max_length && firstword)
		{
			answer[ans_word][ans_length] = *test4;
			firstword = 0;
		}
	}while(*test4++);
	
	int i, j;
	for(i = 0; i < strlen(answer[i]); i++)
	{
		for(j = 0; j < strlen(answer[i]); j++)
		{
			putchar(answer[i][j]);
		}
	}
	putchar('\n');
	return (0);

}
