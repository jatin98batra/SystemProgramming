#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>
int main()
{
	int *status;
	pid_t pid;
	pid=fork();
	switch(pid)
	{
		case -1:{perror("fork");exit(-1);}
		case 0: {sleep(2);	printf("Im child with pid:%d\n",getpid());return 224; }
		default:{
				printf("Im parent:%d\n",getpid());
				if(wait(status) == -1){perror("wait");exit(-1);}
				if(!status){fprintf(stderr,"No status");}
			}
	}


return 0;
}
