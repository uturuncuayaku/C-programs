
unsigned int bin2uint(const char *b){
	unsigned int uint;
	int i;
	uint = i = 0;
	
	if(b == NULL){
		return (0);
	}
	while(b[i] != '\0')
	{
		if(b[i] == '0' || b[i] == '1')
			i++;
		else
			return (0);
	}
	for(i = 0; b[i] != '\0'; i++){
		uint = uint << 1;
		if(b[i] == '1')
		{
				uint += 1;;
		}
	}
	return (uint);
}

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal;
	unsigned int i;

	for (decimal = 0, i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '1')
			decimal = (decimal << 1) | 1;
		else if (b[i] == '0')
			decimal <<= 1;
		else if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	return (decimal);
}
void print_bin(unsigned long int n)
{
	signed long int size;
	char c;
	int flag;
	
	size = sizeof(n) * 8 -1;
	if(n == 0){
		puts("0");
		return;
	}
	if(n == 1)
	{
		puts("1");
		return;
	}
	
	flag = 0;
	
	while(size >= 0)
	{
		c = (n >> size) & 1;
		
		if(flag == 1)
			putchar(c + '0');
		else
		{
			if(c == 1)
			{
				putchar(c + '0');
				flag = 1;
			}
		}
		size -= 1;
	}
}
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int size;

	size = sizeof(n) * 8 - 1;

	if (index > size)
		return (-1);

	return ((n >> index) & 1);

}
