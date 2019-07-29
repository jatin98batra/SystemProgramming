#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{

	int a;

	if(setvbuf(stdin,NULL,_IONBF,0)!=0)
	{
		perror("setvbuf");
		exit(-1);
	
	}
	scanf("%d",&a);
	sleep(10);
	




return 0;
}
