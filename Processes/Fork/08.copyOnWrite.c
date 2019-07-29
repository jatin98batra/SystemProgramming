#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
int main()
{
	pid_t pid;
	int fd;
	char *buf=(char*)malloc(10);
	strncpy(buf,"Hello",5);

	fd=open("file",O_WRONLY|O_CREAT|O_TRUNC);
	if(fd == -1)
	{
		perror("open");
		exit(-1);
	}

	pid=fork();
	if(pid == -1)
	{perror("fork");exit(-1);}
	else if(pid == 0)
	{
		printf("let the parent close the fd... im sleeping\n");
		sleep(5);
		printf("Writing to disk:\n");
		write(fd,buf,5);
       	}
	
	else
	{
		close(fd);
       	}
	


return 0;
}
