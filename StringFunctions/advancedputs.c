-=-=--=-=--=-=--=-=--=-=--=-=--=-=--=-=--=-=-
void puts2(char *str)
{
	while(*s)
		str_len++;

	for (i = 0; i < str_len; i++)
	{
		if (i % 2 == 0)
			_putchar(*(s + i));
			
	}//end of for loop
}//end of puts2

-=-=--=-=--=-=--=-=--=-=--=-=--=-=--=-=--=-=-
int _atoi(char *s){
while (*s)
	str_len++;

for (i = str_len/2; i < n; i++)
{
	
}
int _isspace(char *s)
{
	if (*s == ' ')
		return (0);
	else
		return (1);
}
int _isdigit(char *s)
{
	
}
int _atoi(char *s)
{
	int i, res = 0;

	while(*s)
	{	
		/* Move forward until no spaces */
		while(_isspace(*s))
			s++;

		while(_issign(*s))
		{
			s_count++;
		
			if (*s == '-')
			{
				sign_count--;
			}
			if (*s == '+')
			{
				sign_count++;
			}
			
		}
		
		if(sign_count < 0)
			sign * -1;
		else 
			sign * 1;
			
		for (i = 0; s[i] != 0; i++)
		{
			if(_isdigit(*s))
				res = res * 10 + s[i] - '0';
				
		}
		return (res * sign );
		
		
	}
}
}//end of _atoi
-=-=--=-=--=-=--=-=--=-=--=-=--=-=--=-=--=-=--=-=--=-=--=-=-
