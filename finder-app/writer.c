




#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <syslog.h>

int main(int argc, char **argv)
{


int num;
char *writefile,*writestr;
writefile=argv[1];
writestr=argv[2];
num = argc - 1;
openlog(NULL, 0, LOG_USER);
syslog(LOG_DEBUG,"Writing %s to %s", writestr, writefile);

if (num != 2 ) {
	printf("Invalid number of arguments %d\n", num );
	syslog(LOG_ERR, "Invalid number of arguments %d", num);
	exit(1);
}

int fd, fw;
fd = open(writefile, O_RDWR);
if (fd < 0) {
	printf("Failed to open the file\n");
	syslog(LOG_ERR, "Failed to open the file");
	exit(1);
} else {

	fw = write(fd, writestr, strlen(writestr));
	if (fw < 0) {
		printf("Failed to write to the file\n");
		syslog(LOG_ERR, "Failed to write to the file");
		exit(1);
	}
}

if (close (fd) == -1)
	perror ("close");

}

