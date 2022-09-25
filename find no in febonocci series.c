#include<stdio.h>
int main()
{

int n,prev=0,cur=1,next=0;
printf("enter no");
scanf("%d",&n);
if(n==1)
{
    printf("no is found");
}
for(int i=0;i<n-1;i++)
{
    next=prev+cur;
    prev=cur;
    cur=next;
    if(next==n)
    {
        printf("no found");
        break;
    }
    if(next > n)
    {
        printf("no not found");
        break;
    }
}
return 0;
}

