// if else if program
#include<stdio.h>
main()
{
	float x;
	printf("enter your marks : ");
	scanf("%f",&x);
	if(x>=0&&x<40)
	printf("you are fail");
	else if(x>=40&&x<50)
	printf("you are pass with D grade");
	else if(x>=50&&x<60)
	printf("you are pass with C grade");
    else if(x>60&&x<70)
	printf("you are pass with B grade");
    else if(x>=0&&x<90)
	printf("you are pass with A grade");
    else if(x>=90&&x<100)
	printf("you are pass with O grade");
	else
    printf("Enter your marks dumbass!!!");
}
