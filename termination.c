#include<stdio.h>
int main()
{
char name;
int count=0;
printf("�nter a single char to terminate = ");
scanf("%c",&name);
while(name!='@')
{
count++;
printf("�nter a single char to terminate = ");
scanf("%c",&name);
}
printf("%d",count);
}
