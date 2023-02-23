#include<stdio.h>
int main()
{
  int n=0,i=1,j;
    while(n<10)
    {

        int ct=0;
        for (j=1;j<=i;)
        {
            if(i%j==0)
            ct++;
            j++;
        }
        if(ct==2)
        {
            printf("%d ",i);
            n++;
        }
        i++;
}
}

