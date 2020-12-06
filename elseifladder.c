#include<stdio.h>
int main()
{
    int maths,science,ss,eng,gram,marks=500,all;
    float percentage;
    printf("Enter the Mathematics mark :");
    scanf("%d",&maths);
    printf("\nEnter the Science mark :");
    scanf("%d",&science);
    printf("\nEnter the Social Science mark :");
    scanf("%d",&ss);
    printf("\nEnter the English mark :");
    scanf("%d",&eng);
    printf("\nEnter the Grammer mark :");
    scanf("%d",&gram);
    all=maths+science+ss+eng+gram;
    percentage=(all*100)/marks;
    if(percentage<25)
    {
        printf("Your grade is F");
    }
    else if(percentage>=25&&percentage<=45)
    {
        printf("Your grade is E");
    }
    else if(percentage>45&&percentage<=50)
    {
        printf("Your grade is D");
    }
    else if(percentage>50&&percentage<=60)
    {
        printf("Your grade is C");
    }
    else if(percentage>60&&percentage<=80)
    {
        printf("Your grade is B");
    }
    else if(percentage>80)
    {
        printf("You grade is A,Congrats");
    }
    else
    {
        printf("Failed to get your Grade, Sorry try again");
    }
    return 0;
}