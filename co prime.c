#include<stdio.h>
int main()
{   int a,b,hcf=1,i;
    printf("enter 2 no");
    scanf("%d%d",&a,&b);
   int min=a<b?a:b;
    for(i=1;i<=min;i++)
    {
        {
            if((a%i==0)&&(b%i==0))
                hcf=i;
        }

    }
    if(hcf==1)
    {
        printf(" both no are co prime ");
    }
    else
        printf("no are not co prime");
    return 0;
}


