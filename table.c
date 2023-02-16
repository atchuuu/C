# include <stdio.h>
int main()
{
int i=1,num;
printf("Enter the number you want to find the table : ");
scanf("%d",&num);
while(i<=20)
{
printf("%d * %d = %d\n",num,i,num*i);
i++;
}
}
