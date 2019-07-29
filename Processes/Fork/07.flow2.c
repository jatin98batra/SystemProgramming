#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
	pid_t ret;
	ret=fork();
	if(ret == -1){perror("fork");exit(-1);}
	else if(ret == 0){printf("Child\n");sleep(5);printf("Child Taking exit\n");}
	else{printf("Parent taking an exit\n");}



return 0;
}
