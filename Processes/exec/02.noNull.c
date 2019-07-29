#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{

	if(execl("file","file","hello","bro",NULL) == -1)


return 0;
}
