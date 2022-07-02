#include<stdio.h>
int main()
{
    char str[100];
    scanf("%[^
]s",str);
    int a,b,i;
    scanf("%d",&a);
    scanf("%d",&b);
    for(i=a;i<=b;i++)
    {
        printf("%c",str[i]);
    }
}