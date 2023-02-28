#include<stdio.h>
void fun1()//fun def
{
float a,b,c,d;
printf("enter the data : ");
scanf("%f%f%f",&a,&b,&c);
d=a+b+c;
printf("%f",d);
}
//prototype or declare
int main()
{
fun1();//function calll
}
