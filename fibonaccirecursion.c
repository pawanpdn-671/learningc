#include<stdio.h>
int series(int num);
int main()
{
    int no,i,dam=0;
    printf("Enter the no of series you want to print : ");
    scanf("%d",&no);
    printf("The sequence of series are : ");
    for(i=0;i<no;i++)
    {
        printf("%d ",series(dam));
        dam++;
    }
    return 0;
}
int series(int num)
{
    if(num==0)
    {
        return 0;
    }
    else if(num==1)
    {
        return 1;
    }
    else
    {
        return series(num-1)+series(num-2);
    }
}