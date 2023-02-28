#include<stdio.h>
float add(float a,float b)
{
    int c=a+b;
    return c;
}
void sub()
{
float a,b;
printf("Enter the data for float : ");
scanf("%f%f",&a,&b);
printf("%f\n",a-b);
}
void mul(float a,float b)
{
    printf("%f\n",a*b);
}
int div (void)
{
    int a,b;
    printf("Enter the Data of int division : ");
    scanf("%d%d",&a,&b);
    return (a/b);
}
main()
{
    mul(2.4,5.6);
    int res=div();
    printf("%d\n",res);
    sub();
    float p=add(4.678,9.344);
    printf("%f\n",p);
}
