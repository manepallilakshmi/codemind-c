#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n],count=0;
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            count++;
        }
        if(arr[i]==0)
        {
            count+=1;
        }
    }
    if(count==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}
