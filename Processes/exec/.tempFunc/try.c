#include<stdio.h>
#include<unistd.h>
int main(int argc,char *argv[])
{
	printf("argc:%d\n",argc);
	sleep(2);
	printf("the variables are:\n");
	for(int i=0;i<argc;i++)
	printf("%d:%s\n",i,argv[i]);	

return 0;
}
