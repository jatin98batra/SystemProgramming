#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
	int ret;
	int noc;
	char buf[100];
	close(STDIN_FILENO);
	ret=open("file",O_RDONLY);
	if(ret == -1)
	{
		perror("open");
		exit(-1);
	
	}
	printf("File Desc :%d\n",ret);
	noc=read(ret,buf,99);

//	buf[noc]='\0';
	printf("%s",buf);


return 0;
}
