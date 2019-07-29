#include<stdio.h>
#include<stdlib.h>
int main(int argc, char** argv)
{

	if(argc < 2)
	{
		fprintf(stderr,"Put some argument");
		exit(-1);
	}
	char *out=NULL;
	out=getenv(*(argv+1));
	if(out!=NULL)
	{
		printf("The location its pointing:%p\n",out);
		printf("output:%s\n",out);
	}







	//Must try by uncommenting


	/*
	printf("Modifying...\n");
	 out[2]='H'; 
	 //i can actually change the enviorment variables associated with the program .....
	 //also if the program is re-run everytime the address pointer is pointing to is
	 //different and hence its proven that the enviorment variables are associated with single process
	out=getenv("USER");
	if(out!=NULL)
	{
		printf("The location its pointing:%p\n",out);
		printf("output:%s\n",out);
	}
*/


return 0;
}
