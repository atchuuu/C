# include<stdio.h>
int main()
{
int a,b,c;
printf("Enter the first number :");
scanf("%d",&a);
printf("Enter the second number :");
scanf("%d",&b);
printf("Enter the third number :");
scanf("%d",&c);
(a>b&&a>c)?printf("A is greater"):(b>c&&b>a)?printf("B is greater"):printf("C is greater");
}
