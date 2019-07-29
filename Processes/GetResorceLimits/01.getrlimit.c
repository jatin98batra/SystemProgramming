#include<stdio.h>
#include<sys/resource.h>
#include<stdlib.h>
/*           struct rlimit {
               rlim_t rlim_cur;  
               rlim_t rlim_max;  
           };
*/
int main()
{
	struct rlimit *rlim;
	rlim=(struct rlimit*)malloc(sizeof(struct rlimit));
	if(!rlim){perror("malloc");exit(-1);}
	getrlimit(RLIMIT_NICE,rlim);
	printf("soft:%lu\n",rlim->rlim_cur);
	printf("max:%lu\n",rlim->rlim_max);


return 0;
}
