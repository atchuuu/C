// program for constant and variable
#include <stdio.h>
main()
{
    int a=200;
    a=300;
    printf("%d\n",a);

    const int x=34;
//  x=99;
    printf("%d\n",x);
    const float y=34.44;
//  y=99.99;
    printf("%f\n",y);
    const char g='c';
//  g='l';
    printf("%c\n",g);
}
