#include<stdio.h>
void sum(int n)
{
    int temp,s=0,r;
    temp=n;
    while(temp>0)
    {
        r=temp%10;
        s=s+r;
        temp=temp/10;
    }
    if(s>=10)
    {
        sum(s);
    }
    else
    {
        printf("%d",s);
    }
}
int main()
{
        int n;
        scanf("%d",&n);
        sum(n);
}