#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    while(n)
    {
        for(i=1;i<=n;i++)
        {
            printf("%d",i);
        }
        printf("
");
        n--;
    }
}