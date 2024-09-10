#include<stdio.h>
#include<unistd.h>

int main()
{
printf(" i am in exec_demo.c\n");
printf("PID of exec_demo.c is %d\n",getpid());
char*args[]={"ello",NULL};
execv(args[0],args);
printf("Coming back to execv_demo.c\n");
return 0;
}
