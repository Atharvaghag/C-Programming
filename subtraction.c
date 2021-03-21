/*
    Programme to subtract 2 numbers
*/

#include<stdio.h>

int main()
{
    int num1=0;
    int num2=0;
    int sub=0;
    
    printf("Enter 1st number :\n");
    scanf("%d",&num1);
    
    printf("Enter 2nd number :\n");
    scanf("%d",&num2);
    
    sub=num1-num2;
    
    printf("Addition = %d",sub);
    
    return 0;
}
