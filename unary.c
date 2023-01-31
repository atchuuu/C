#include <stdio.h>
main()
{
    int x;
    printf("enter a number for increment and decrement:");
    scanf("%d",&x);


    int a=x;
    printf("x=%d\n-x=%d\n",x,a);
    int b=++x;
    printf("++x=%d\n",b);
    int c=--x;
    printf("--x=%d\n",c);
    int d=x++;
    printf("x++=%d\n",d);
    int e=x--;
    printf("x--=%d",e);
    return 0;
}
