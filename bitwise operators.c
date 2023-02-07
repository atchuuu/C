//bitwise operators
#include <stdio.h>
main(){
int x,y;
printf("enter a number : ");
scanf("%d",&x);
printf("enter the second number : ");
scanf("%d",&y);
int a=x&y;
int b=x|y;
int c=x^y;
int d=~x;
int e=~y;
int f=x<<2;
int g=y<<2;
int h=x>>2;
int i=y>>2;
printf("&=%d\n",a);
printf("|=%d\n",b);
printf("^=%d\n",c);
printf("~x=%d and ~y=%d\n",d,e);
printf("x<<2=%d and y<<2=%d\n",f,g);
printf("x>>2=%d and y>>2=%d\n",h,i);
}
