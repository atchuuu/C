#include <stdio.h>
int main()
{
int a;
printf("Enter a number : ");
scanf("%d",&a);
if (a==0)
{
    printf("You have entered zero");

}

else
{

    if (a>0)
        printf("You entered a  positive number");
    else
        printf("you have entered a negative number");
}
}
