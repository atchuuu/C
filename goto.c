#include<stdio.h>
void main()
{
int x=10;
printf("%d\n",x);
goto myname;
printf("hello\n");
printf("bye");
myname:
printf("we are here");
}
