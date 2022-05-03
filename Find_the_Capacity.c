#include<stdio.h>
int main()
{
    int s,t,b,c,c1;
    scanf("%d%d%d", &s,&t,&b);
    c=2*s*b*t*512;
    c1=c/1024;
    printf("%dKB",c1);
}