#include<stdio.h>
int main()
{

int n,prev=0,cur=1,next=0;
printf("enter no");
scanf("%d",&n);
for(int i=0;i<n-1;i++)
{
    next=prev+cur;
    printf("%d",next);
    prev=cur;
    cur=next;
}
return 0;
}
