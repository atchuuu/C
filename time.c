#include<stdio.h>
int main(){
int a,b,c;
printf("Enter hours : ");
scanf("%d",&a);
b=a*60;
c=a*60*60;
printf("There are %d seconds or %d mins in %d hours",c,b,a);
}
