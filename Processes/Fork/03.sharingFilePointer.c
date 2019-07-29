#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
	pid_t pid;
	int fd;
	char *childBuf=(char*)malloc(10);
	char *parentBuf=(char*)malloc(10);
	fd=open("file",O_RDONLY);
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
		printf("Child:%d\n",getpid());
		read(fd,childBuf,5);
		printf("%d:%s\n",getpid(),childBuf);
       	}
	
	else
	{
		printf("Parent:%d\n",getpid());
		read(fd,parentBuf,5);
		printf("%d:%s\n",getpid(),parentBuf);
       	}
	


return 0;
}
