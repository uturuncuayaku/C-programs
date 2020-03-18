
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
	char *test4 = "america,";

	int word_length = 0, max_length = 0, position = 0;
/*
	int ans_words = 0;
	char *ptr;
	char answer[1024][1024];
	do{
		start_ptr = test4;
		
		if (*test4 == ',')
		{
			if (word_length > max_length)
			{
				end_ptr = test4;
				max_length = word_length;
				position = end_ptr - start_ptr;
				
				if (strlen(answer[0]) > max_length)
					answer[0] = strndup(start_ptr, position);

				if (strlen(answer[0]) == max_length)
				{
					strncat(answer[ans_words], start_ptr, position);
					ans_words++;
				}
			
			}
			if (word_length == max_length && first_word)
			{

			}

			
			word_length = 0;

		}else
		{
			word_length++;
		}
		test4++;
		//putchar(*test4);
	}while(*test4++);
	putchar('\n');

	*/
	int ans_word = 0;
	int ans_length = 0;
	char *endptr = NULL;
	char *startptr = NULL;
	char *save = test4;
	do
   	{
		//startptr = test4;
		
		printf("String at startptr: %s\n", startptr);
		
		if (*test4 != ',')
		{
			printf("Character at test4:%c\n",(*test4));	
			answer[ans_word][ans_length] = *test4;
			printf("Answer-ROW:%d\nAnswer-COL:%d\n", ans_word, ans_length);
			ans_length++;

		}
		putchar('\n');
		if (*test4 == ',')
		{
			ans_word++;
			endptr = test4;
			position = endptr - save;
			
			printf("Position: %d\n", position);
			printf("Starting Address of test4 string: %p\n", startptr);
			printf("Ending Address of test4 string: %p\n", endptr);

			//answer[ans_words] = *(test4 + position);
			//printf("Found comma:%s\n", answer[ans_words]);

		}			
		
	}while(*test4++);
	
	
	
	return (0);

}
