# include<stdio.h>
main()
{
int a,b;
printf("Enter the first number : ");
scanf("%d",&a);
printf("Enter the second number : ");
scanf("%d",&b);
if ((a+b)>20)
{
printf("you are pass\n");
printf("good");
}
else
{
    if (a+b==20)
        printf("mar pass");
    else
    {
        printf("You failed");
    }
}
printf("we are in sequence");
}
