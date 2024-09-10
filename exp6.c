#include<stdio.h>
#include<sys/wait.h>
#include<sys/types.h>
#include<unistd.h>
int main()
{
	if(fork()==0)
	{
	printf("hello from child\n");
	printf("it is child,running\n");
	}
	else
		{
			printf("HP: hello from parent \n");
			printf(" it is present running\n");
			wait(NULL);
			printf("book to parent\n");
			printf("CT:child has terminated\n");
		}
	printf("good bye\n");
	return 0;
}
