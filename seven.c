// program for relational operator
# include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the value for A: ");
    scanf("%d",&a);
    printf("Enter the value for B: ");
    scanf("%d",&b);
    printf("you have entered A=%d and B=%d\n",a,b);
    c=a>b;
    printf("%d>%d=%d \n",a,b,c);
    c=a<b;
    printf("%d<%d=%d \n",a,b,c);
    c=a==b;
    printf("%d==%d=%d\n",a,b,c);
    c=a!=b;
    printf("%d!=%d=%d\n",a,b,c);
    c=a>=b;
    printf("%d>=%d=%d\n",a,b,c);
    c=a<=b;
    printf("%d<=%d=%d\n",a,b,c);
    c=a&&b;
    printf("%d&&%d=%d\n",a,b,c);
    c=a||b;
    printf("%d||%d=%d\n",a,b,c);
    c=!(a||b);
    printf("!(%d||%d=%d)\n",a,b,c);

}
