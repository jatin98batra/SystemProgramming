#include<stdio.h>
#include<stdlin.h>
#include<unistd.h>
int main()
{
  
	
	pid_t pid;
	int pipeFd[2];
	if(pipe(pipeFd) == -1){perror("pipe");exit(-1);}

	pid=fork();

	if(pid == -1){perror("fork");exit(-1);}

	if(pid == 0)
	{
		printf("Child Here:%d\n",getpid());
		//closing the writer end
		close(pipeFd[1]);
		execl("./child",""
	}

	


return 0;
}
