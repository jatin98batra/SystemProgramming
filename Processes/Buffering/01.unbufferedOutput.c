#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{


	if(setvbuf(stdout,NULL,_IONBF,0)!=0)
	{
		perror("setvbuf");
		exit(-1);
	
	}
	printf("Hello");
	




return 0;
}
