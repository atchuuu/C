#include<stdio.h>
int main(){
int a,b,c;
printf("Enter the quantity of number of pens = ");
scanf("%d",&a);
printf("Enter the quantity of number of books = ");
scanf("%d",&b);
printf("Enter the quantity of number of notebooks = ");
scanf("%d",&c);
int d=(a*10)+(b*20)+(c*15);
printf("The Total amount of your bill is %d",d);
}
