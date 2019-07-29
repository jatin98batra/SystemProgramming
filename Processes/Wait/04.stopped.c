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
		case 0: { sleep(9);printf("Im child with pid:%d\n",getpid()); getchar();return 224; }
		default:{
				printf("Im parent:%d\n",getpid());
				if(wait(status) == -1){perror("wait");exit(-1);}
				if(!status){fprintf(stderr,"No status");}
				
				printf("Extracting Info :\n");
				printf("WIFEXITED:%d\n",WIFEXITED(*status));
				printf("WEXITSTATUS:%d\n",WEXITSTATUS(*status));
				printf("WIFSIGNALED:%d\n",WIFSIGNALED(*status));
				printf("WTERMSIG:%d\n",WTERMSIG(*status));
				printf("WCOREDUMP:%d\n",WCOREDUMP(*status));
				printf("WIFSTOPPED:%d\n",WIFSTOPPED(*status));
				printf("WSTOPSIG:%d\n",WSTOPSIG(*status));
				
				printf("Parent Exiting....\n");			
			}
	}


return 0;
}
