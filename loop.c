//while loop
#include<stdio.h>
main()
{
int x=1;
while(x<20)
{
printf("%d\n",x);
printf("you are in while op\n");
x=x+4;
}
//for loop
int y;
for(y=1;y<20;y+=4)
{
    printf("%d\n",y);
    printf("you are in for loop\n");

}
//do while
int z=1;
do
{
    printf("%d\n",z);
    printf("you are in do while loop\n");
    z+=4;
}while(z<20);
}
