#include<stdio.h>
//prototype or declare
int main()
{
    int a,b,c;
    printf("enter the data : ");
    scanf("%d%d%d",&a,&b,&c);
    int p=fun1(a,b,c);
    printf("%d",p);
}
int fun1(int a,int b,int c)//fun def
{
    int x;
    x=a+b+c;
    return x;
}
