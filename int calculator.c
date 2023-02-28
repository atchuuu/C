# include<stdio.h>
int add(int a,int b)
{
    int c=a+b;
    return c;
}
void sub(void)
{
        int a,b;
        printf("Enter the first number = ");
        scanf("%d",&a);
        printf("Enter the second number = ");
        scanf("%d",&b);
        printf("the diff of %d and %d is %d\n",a,b,a-b);

}
void mul(int a,int b)
{
     printf("the product of %d and %d is %d\n",a,b,a*b);
}
int div(void)
{
        int a,b;
        printf("Enter the first number = ");
        scanf("%d",&a);
        printf("Enter the second number = ");
        scanf("%d",&b);
        printf("the rem of %d and %d is %d\n",a,b,a/b);
}
int main()
{
    int a,b;
    int n;
    printf("Enter 1 for Addition, 2 for Subtraction, 3  for multiplication, 4 for division =");
    scanf("%d",&n);
    if (n==1)
    {
        printf("Enter the first number = ");
        scanf("%d",&a);
        printf("Enter the second number = ");
        scanf("%d",&b);
        int ad=add(a,b);
        printf("the sum of %d and %d is %d\n",a,b,ad);
        return main();
    }
     else if (n==2)
    {
        sub();
        return main();
    }
    else if (n==3)
    {
        printf("Enter the first number = ");
        scanf("%d",&a);
        printf("Enter the second number = ");
        scanf("%d",&b);
        mul(a,b);
        return main();

    }
        else if (n==4)
    {

        div();
        return main();

    }
    else
    {
        printf("Enter a number between 1 to 4");
        return main();
    }

}
