#include<stdio.h>
int main()
{
	int r,c,sum=0,sum1=0,max=0,max1=0;
	//printf("enter the row and column values ");
	scanf("%d%d",&r,&c);
	int a[r][c],i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
    for(i=0;i<r;i++)
    {
        sum=0;
        for(j=0;j<c;j++)
        {
            sum=sum+a[i][j];
        }
        if(sum>max)
        {
            max=sum;
        }
    }
    for(j=0;j<c;j++)
    {
        sum1=0;
        for(i=0;i<r;i++)
        {
            sum1=sum1+a[i][j];
        }
        if(sum1>max1)
        {
            max1=sum1;
        }
    }
    if(max>max1)
    {
        printf("%d",max);
    }
    else
    {
    printf("%d",max1);
    }
}