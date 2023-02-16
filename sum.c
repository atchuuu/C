#include<stdio.h>
int main()
{
int sum=0,i,num;
printf("Enter the number : ");
scanf("%d",&num);
for (i=1;i<=num;++i)
{
    sum=sum+i;

}
printf("the sum until %d numbers is %d\n",num,sum);
int j,s=0;
while(j<=num)
{
    s=s+j;
    j=j+1;
}
printf("using while = %d",s);
}
