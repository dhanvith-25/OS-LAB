#include<stdio.h>
//#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>
#include<sys/wait.h>
int main()
{
	pid_t q;
	printf("Helo! it is beore fork\n\n");
	printf("PID= %d",getpid());
	q=fork();
	if(q<0)
	{
		printf("error");
	}
		else if(q==0)
	{
		printf("i am child, having pid%d\n",getpid());
		printf("\n call hello.c from child process\n");
		char*arg[]={"./hello,",NULL};
		execv(arg[0],arg);
		printf("\n coming back to child process\n");
	}
	else
	{
		printf("i am parent\n");
		printf("my child's pid %d \n",q);
	}
	printf("good bye! \n");
	return 0;
}
