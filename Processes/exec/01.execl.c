#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{

	if(execl("file",NULL) == -1)
	{perror("execl");exit(-1);}
	printf("hey\n");


return 0;
}
