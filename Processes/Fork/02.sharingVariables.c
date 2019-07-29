#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int global;
int main()
{
	int local=20;
	int *heap=(int*)malloc(sizeof(int));
	*heap=30;
	global=10;

	pid_t pid;
	pid=fork();
	if(pid == -1)
	{
		perror("fork");
		exit(-1);
	}
	else if(pid == 0)
	{
		printf("Child here:%d\n",getpid());
		printf("accessing the local variable:%d\n",local);
		printf("accessing the global variable:%d\n",global);
		printf("accessing the heap variable:%d\n",*heap);
	}
	
	else
	{
		printf("Im parent:%d\n",getpid());
	
	}


return 0;
}
