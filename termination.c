#include<stdio.h>
int main()
{
char name;
int count=0;
printf("ënter a single char to terminate = ");
scanf("%c",&name);
while(name!='@')
{
count++;
printf("ënter a single char to terminate = ");
scanf("%c",&name);
}
printf("%d",count);
}
