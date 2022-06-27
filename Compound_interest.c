#include<stdio.h>
#include<math.h>
int main()
{
    int p,t;
    double r,c;
    scanf("%d %lf %d",&p,&r,&t);
    c=p*pow((1.0+r/100),t);
    printf("%.2lf",c);
    
}
