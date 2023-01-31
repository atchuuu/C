#include <stdio.h>
main()
{
int a,b,c,d,e;
float avg;
printf("Enter the marks of maths: ");
scanf("%d",&a);
printf("Enter the marks of eng: ");
scanf("%d",&b);
printf("Enter the marks of sci: ");
scanf("%d",&c);
printf("Enter the marks of soc: ");
scanf("%d",&d);
printf("Enter the marks of comp: ");
scanf("%d",&e);
avg=(a+b+c+d+e)/5;
printf("The Averaqe of your marks is %f",avg);
}
