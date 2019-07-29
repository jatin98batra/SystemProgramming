#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
#include<sys/wait.h>
void handler()
{
	printf("Just received the signal\n");

}
int main()
{
	
	pid_t pid;
	int fd;
	int var;
	char *buf=(char*)malloc(10);
	strncpy(buf,"Hello",5);
	signal(SIGCONT,handler);

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
		printf("Child:%d\n",getpid());
		pause();
		printf("Writing to disk:\n");
		write(fd,buf,5);
		printf("Changing the variable\n");
		var=20;
		pause();

       	}
	
	else
	{
//		close(fd);
		printf("Parent:%d\n",getpid());
		wait(0);
       	}
	


return 0;
}
