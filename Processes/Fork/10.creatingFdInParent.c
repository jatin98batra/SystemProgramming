#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
#include<sys/wait.h>
int main()
{
	pid_t pid;


	pid=fork();
	if(pid == -1)
	{perror("fork");exit(-1);}
	else if(pid == 0)
	{
		printf("lets try to read from fd 3\n");
		printf("Writing to disk:\n");
		if(write(3,"Hello",5) == -1)
		{
			perror("Write");
			exit(-1);
		}
       	}
	
	else
	{
		open("file",O_WRONLY|O_CREAT|O_TRUNC);
		wait(NULL);
	//		close(fd);
       	}
	


return 0;
}
