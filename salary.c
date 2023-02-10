#include <stdio.h>
main()
{
char a;
int sal;
printf("Enter M or F : ");
scanf("%c",&a);
if(a=='M'|| a=='m')
{

    printf("Enter Your Salary :" );
    scanf("%d",&sal);
    if(sal>10000)
    printf("Your bonus is 1000");
    else if (sal<=10000 && sal>=5000)
    printf("Your bonus is 500");
    else
    printf("Your bonus is 10");

}
else if(a=='F'|| a=='f')
{

    printf("Enter Your Salary :" );
    scanf("%d",&sal);
    if(sal>10000)
    printf("Your bonus is 1");
    else if (sal<=10000 && sal>=5000)
    printf("Your bonus is 500");
    else
    printf("Your bonus is 10");
}
else
printf("Enter a valid gender");
}
