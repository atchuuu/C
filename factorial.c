#include<stdio.h>
int main()
{
int a,b=1,i;
printf("enter a number : ");
scanf("%d",&a);
for (i=1;i<=a;i++)
{
b=b*i;
}
printf("the factorial of %d is %d",a,b);
}
