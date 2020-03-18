#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char* are_you_playing_banjo(const char* name) {
  
  unsigned int len = strlen(name) + 2;

  if (name[0] == 'r')
  {
    
    char *does_not = malloc((len + sizeof( " does not play banjo")) * sizeof(char));
	strcpy(does_not, name);
  	strcat(does_not, " does not play banjo");
    return (does_not);
  }
  else if (name[0] == 'R')
  {
    
    char *banjo = malloc((len + sizeof(" plays banjo")) * sizeof(char));
    strcpy(banjo, name);
    strcat(banjo, " plays banjo");
    return (banjo);
  }
  return (NULL);
}

int main(void)
{
	char name[5] = "Rikke";
	char *actual = are_you_playing_banjo(name);
	printf("%s\n",actual);
	return (0);
}
