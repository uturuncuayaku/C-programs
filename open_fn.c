#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>


//int open(const char *pathname, int flags, ... /* mode_t mode */);


int main(){
	int fd;
	int fd2;
	int fd3;

  /* Open existing file for reading */
	fd = open("startup", O_RDONLY);
	if(fd == -1)
		fprintf(stderr,"Cannot open file, Try again later.");

	/* Open new or existing file for read and write. Truncating to zero bytes;
	 * file permissions read+write for owner, nothing for all others */
	fd2 = open("myfile", O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if(fd2 == -1)
		fprintf(stderr,"Cannot open file, Try again later.");
	
	/* Open new or existing file for writing;
	 * writes should always append to end of file
	 */
	fd3 = open("w.log", O_WRONLY | O_CREAT | O_TRUNC | O_APPEND,S_IRUSR | S_IWUSR);
	if(fd3 == -1)
		fprintf(stderr,"Cannot open file, Try again later.");
	
	if(fd == -1)
		fprintf(stderr, "Cannot open file, Try again later.");

	if(close(fd) == -1)
		fprintf(stderr,"close file");

	if(close(fd2) == -1)
		fprintf(stderr,"close file");


	if(close(fd3) == -1)
		fprintf(stderr,"close file");

	return 0;

}
