#include <stdio.h>
main(){
int ca,att;
printf("Enter your attendance = ");
scanf("%d",&att);
printf("Enter your CA marks = ");
scanf("%d",&ca);
(att>75&&ca>40)?printf("You are eligible for ete"):printf("you are not eligible for ete");
}
