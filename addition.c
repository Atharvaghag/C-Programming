/*
    Programme to add 2 numbers
*/

#include<stdio.h>

int main()
{
    int num1=0;
    int num2=0;
    int sum=0;
    
    printf("Enter 1st number :\n");
    scanf("%d",&num1);
    
    printf("Enter 2nd number :\n");
    scanf("%d",&num2);
    
    sum=num1+num2;
    
    printf("Addition = %d",sum);
    
    return 0;
}
