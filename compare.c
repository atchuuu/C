#include <stdio.h>
int main()
{
int a,b;
printf("Enter the first number : ");
scanf("%d",&a);
printf("Enter the second number : ");
scanf("%d",&b);
(a>b)?printf("%d is smaller\n",b):printf("%d is smaller\n",a);//terenary operators
if (a<b)//if else method
printf("%d is smaller\n",a);
else if (a=b)
printf("%d is equal to %d\n",a,b);
else
printf("%d is smaller",b);
}

