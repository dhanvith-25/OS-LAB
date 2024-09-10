#include<stdio.h>
#include<sys/wait.h>
#include<sys/types.h>
#include<unistd.h>
int main()
{
	pid_t q;
	printf("hello! it is before fork\n\n");
	printf("PID= %d\n",getpid());
	q=fork();
	if(q<0)
		{
			printf("error");
		}
	else if (q==0)
		{
			printf(" i am child,having pid%d\n",getpid());
		}
	else
		{
			wait(NULL);
			printf("my child's pid is, %d\n",q);
		}
	printf("good bye\n");
	return 0;
}
