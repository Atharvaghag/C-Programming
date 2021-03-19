#include<stdio.h>
int main()
{
    int i=0;
    int j=0;
    int a[i];
    int sum=0;
    
    for(i=0; i<5; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<5; i++)
    {
        for(j=1; j<=a[i]; j++)
        { 
             sum=sum+j;
        }
        printf("%d ",sum);
        sum=0;
    }
}