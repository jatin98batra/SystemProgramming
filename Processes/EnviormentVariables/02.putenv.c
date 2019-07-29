#include<stdio.h>
#include<stdlib.h>
int main()
{
	char *retString;
	int ret=putenv("HELLO=Hi");	
	if(ret!=0)
	{
		perror("putenv");
		exit(-1);
	}

	retString=getenv("HELLO");
	if(retString!=NULL)
		printf("out:%s\n",retString);
	

	/////////////////////////////////Removing.////////////////////////////////
	ret=putenv("HELLO");
	if(ret!=0)
	{
		perror("putenv");
		exit(-1);
	}
	retString=getenv("USER");
	if(retString!=NULL)
		printf("The Variable isn't Removed:%s\n",retString);
	else
		printf("This isn't present in the Enviorment\n");





return 0;
}
