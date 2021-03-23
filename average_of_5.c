/*
    Program to find Average of 5 subjects
*/
#include<stdio.h>

int main()
{
    float math=0;
    float phy=0;
    float chem=0;
    float eng=0;
    float hist=0;
    float avg=0;
    float total=0;
    
    printf("Enter marks of Mathematics :\n");
    scanf("%f",&math);
    
    printf("Enter marks of Physics :\n");
    scanf("%f",&phy);
    
    printf("Enter marks of Chemistry :\n");
    scanf("%f",&chem);
    
    printf("Enter marks of English :\n");
    scanf("%f",&eng);
    
    printf("Enter marks of History :\n");
    scanf("%f",&hist);
    
    total=math+phy+chem+eng+hist;
    avg=total/5; // Average = Total marks obtained / Number of subjects 
    
    printf("\nAverage = %.2f",avg);
}
