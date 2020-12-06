#include<stdio.h>
int main()
{
    int choice;
    printf("\n\t1. Add");
    printf("\n\t2. Edit");
    printf("\n\t3. Extract");
    printf("\n\t4. Exit");
    printf("\nEnter you Choice");
    scanf("%d",&choice);
    if(choice==1)
    {
        printf("Add option selected");
    }
    else if(choice==2)
    {
        printf("Edit option selected");
    }
    else if(choice==3)
    {
        printf("Extract options selected");
    }
    else if(choice==4)
    {
        printf("Exit option selected");
    }
    else
    {
        printf("Invalid choice");
    }
    return 0;
}