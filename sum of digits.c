#include <stdio.h>
int main(){
int a,b,c,d,e,f,g,h;
printf("Enter a 4 digit number : ");
scanf("%d",&a);
b=a/1000;
c=a/100;
d=c%10;
e=a/10;
f=e%10;
g=a%10;

h=b+d+f+g;
printf("%d",h);

}
