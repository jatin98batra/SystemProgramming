#include<stdio.h>
#include<stdlib.h>
//char *secure_getenv(const char *name);
int main()
{
	char *retString;
	int ret=putenv("HELLO=Hi");	
	if(ret!=0)
	{
		perror("putenv");
		exit(-1);
	}

	retString=secure_getenv("HELLO");
	if(retString!=NULL)
		printf("out:%s\n",retString);
	






return 0;
}
