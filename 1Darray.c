#include<stdio.h>
int main()

{
    int sub[5],i,total;
    printf("Enter the elements of Array");
    for(i=0;i<5;i++)
    {
        scanf("%d",&sub[i]);
        total=total+sub[i];


    }
    for(i=0;i<5;i++)
    {
        printf("%d ",sub[i]);
    }
    printf("\nThe sum of all the elements is %d",total);
    return 0;
}