#include<stdio.h>
int ror(int arr[]);
int main()
{
    int i,arr[100],number;
    printf("Enter the number of the element of the Array : ");
    scanf("%d",&number);
    printf("Enter the elements of the Array : ");
    for(i=0;i<=number;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The odd number from the following are : ");
    for(i=0;i<number;i++)
    {
        printf("%d",ror(arr));
        
    }
    return 0;
}
int ror(int arr[])
{
    return 0;
}