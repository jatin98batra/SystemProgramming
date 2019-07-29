#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/signal.h>
void sigchldHandler()
{
	printf("received the SIGCHLD\n");

}
int main()
{

	pid_t pid=fork();
	if(pid == -1){perror("fork");exit(-1);}
	if(pid == 0)
	{
		printf("Im going soon but my ghost is gonna wait for papa to kill me\n");
	
	}

	else
	{
		signal(SIGCHLD,sigchldHandler);
		printf("Child pid:%d and my pid:%d\n",pid,getpid());
		getchar();
		printf("Check if the process is killed?\n");
		getchar();
		printf("Check if the process is killed?\n");
		getchar();
	}




return 0;
}
