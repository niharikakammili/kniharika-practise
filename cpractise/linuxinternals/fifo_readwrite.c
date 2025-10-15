#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

int main(int argc, char *argv[])
{
	int fd = -1;

	// Check if argument is provided
	if (argc < 2) {
		printf("Usage: %s <message>\n", argv[0]);
		return 1;
	}

	fd = open("./fifo1", O_RDWR);
	if(fd > 0)
	{
		char str[20] = {0};  // Initialize the buffer to avoid garbage values

		write(fd, argv[1], strlen(argv[1]) + 1);
		printf("Successfully sent %ld bytes\n", strlen(argv[1]));

		read(fd, str, sizeof(str) - 1);
		printf("Successfully Received %s string\n", str);
	}
	else
	{
		printf("FIFO not opened\n");
	}

	close(fd);	
	return 0;
}

