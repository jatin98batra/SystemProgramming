#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{ 

	pid_t pid;
	pid=fork();
	switch(pid)
	{
		case -1:perror("fork");exit(-1);
			break;

		case 0: printf("child Begins With Pid :%d\n",getpid());
			printf("%d: you know what i returned:%d\n",getpid(),pid);
			printf("%d: Do you know my parent's PID is:%d\n",getpid(),getppid());
			printf("%d:i think its time to go\n",getpid());
			break;

		default:printf("parent here with pid: %d\n",getpid());
			printf("Now i have a kid with pid :%d\n",pid);
			break;
	}




return 0;
}
