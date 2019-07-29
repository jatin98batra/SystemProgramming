#include<stdio.h>
#include<stdlib.h>
int main(int argc,char**argv)
{
	if(argc < 2)
	{
		perror("No args");
		exit(-1);
	}
	
	printf("out:%s\n",*(argv+1));



	return 0;
}
