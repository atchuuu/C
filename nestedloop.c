#include<stdio.h>
main()
{
int i,j,k;
int n;
printf("Enter the number till table you be printed :");
scanf("%d",&n);
for (i=2;i<=n;i++)

{
    if(i%5==0&&i%2!=0)


for(j=1;j<=10;j++)
{

printf("%3d*%3d=%3d\t",i,j,i*j);

}
printf("\n");
}
printf("you are out of loop");

}


