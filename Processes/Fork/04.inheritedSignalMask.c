#include<stdio.h>
#include<stdlib.h>
#include<signal.h>
#include<unistd.h>
int main()
{
	pid_t pid;
	signal(SIGINT,SIG_IGN); //masked
	pid=fork();
	if(pid == -1)
	{
		perror("fork");
		exit(-1);
	}
	
	else if(pid == 0)
	{
		printf("Child Here:%d\n",getpid());
		while(1);
	
	}

	else
	{
	
		printf("Parent Here taking exit:%d\n",getpid());
	
	}

}
