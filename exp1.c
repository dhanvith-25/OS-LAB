
#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<sys/wait.h>
int main()
{
pid_t q;
printf("it is betore fork \n\n");
printf("PID=%d\n",getpid ());

q=fork();

if(q<0)
{
printf("Error");
}
else
if(q==0)
{
printf("i am child having pid %d\n",getpid());
}
else
{
printf("i am parent\n");
printf(" mychild pid is %d\n",q);
}
printf("Good Bye!\n");
return 0;
}

