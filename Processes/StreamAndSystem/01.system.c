#include<stdio.h>
#include<stdlib.h>
int sysFunc();
int main()
{


	//sysFunc();
	system("ls &");




return 0;
}


int sysFunc()
{

	int ret;
	ret=system(NULL);
	printf("The system returned:%d\n",ret);
	if(!ret)
		printf("There is no shell available.\n");
	else
		printf("There is a shell available\n");


}
