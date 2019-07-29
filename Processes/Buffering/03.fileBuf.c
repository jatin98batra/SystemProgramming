#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
#define RANDOMSIZ 10
int main()
{


	char buf[RANDOMSIZ];
	char buf2[RANDOMSIZ]={0};
	if(setvbuf(stdout,buf,_IOFBF,RANDOMSIZ)!=0)
	{
		perror("setvbuf");
		exit(-1);
	
	}
	printf("THOR IS BACK BITCHES,IM GONNA KILL YOU !\n");
	strncpy(buf2,buf,RANDOMSIZ);
	
	int newFd=open("filex",O_WRONLY|O_CREAT|O_TRUNC);
	write(newFd,buf2,RANDOMSIZ);


return 0;
}
