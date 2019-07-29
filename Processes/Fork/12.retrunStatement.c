#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{

	pid_t pid=fork();
	if(pid == -1){perror("fork");exit(-1);}
	if(pid == 0)
	{
		printf("Im going soon but my ghost is gonna wait for papa to kill me\n");
		return 0;	
	}

	else
	{
		printf("Child pid:%d and my pid:%d\n",pid,getpid());
		getchar();
	}




return 0;
}
