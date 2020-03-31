#include <sys/types.h>
#include <unistd.h>
ssize_t read_text(const char *file, size_t letters)
{
	int fd;
	ssize_t close1, read1, write1;
	char *buffer = malloc(letters);
	if(!file)
		return 0;
	fd = open(file, O_RDONLY);
	if(fd == -1)
		return 0;
	read1 = read(fd,buffer,letters);
	if(read1 == -1)
		return 0;
	write1 = write(STDOUT_FILENO, buffer,read1);
	if(write1 == -1)
		return 0;
	close1 = close(fd);
	if(close1 == -1)
		return 0;
	return read1;
	
}
int create_file(const char *file, char *content)
{
	int new;
	int close1, write1;
	new = open(file, O_CREAT | O_WRONLY | O_TRUN, 0600);
	write1 = write(new,content,(int)strlen(content));
	close(new);
	return 1;
}
int append_text(const char *file, char *content){
		int fd = open(file, O_WRONLY | O_APPEND);
		write(fd, content, strlen(content);
		close(fd);
		return 1;
}
