# include<stdio.h>
void fun(int a,int b )
{
a=a+2;
b=b+2;
printf("inside fun values are %d%  d\n",a,b);
}
int main()
{
int aa,bb;
printf("enter the data = ");
scanf("%d%d",&aa,&bb);
fun(aa,bb);
printf("inside main values are %d %d",aa,bb);
}
