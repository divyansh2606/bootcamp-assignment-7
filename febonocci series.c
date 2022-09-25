#include<stdio.h>
int main()
{

int n,prev=0,cur=1,next=0;
printf("enter no");
scanf("%d",&n);
for(int i=0;i<n-1;i++)
{
    next=prev+cur;
    prev=cur;
    cur=next;
}
printf("%d",next);
return 0;
}
