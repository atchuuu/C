#include<stdio.h>
int main(){
int a,b,c;
printf("Enter a number A:");
scanf("%d",&a);
printf("Enter a number B:");
scanf("%d",&b);
c=a;
a=b;
b=c;
printf("A is %d\n",a);
printf("B is %d\n",b);
int x,y;
printf("Enter a number X:");
scanf("%d",&x);
printf("Enter a number Y:");
scanf("%d",&y);
x=x-y;
y=x+y;
x=y-x;
printf("A is %d\n",x);
printf("B is %d",y);
}
