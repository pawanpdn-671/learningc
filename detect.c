#include<stdio.h>
int main()
{
    int arr[100],n,count=0,i,len;
    printf("Enter no. of elements in the Array.");
    scanf("%d",&len);
    printf("Enter the Array:");
    for(i=0;i<len;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to find.");
    scanf("%d",&n);
    for(i=0;i<len;i++)
    {
        if(arr[i]==n)
        {
            count=count+1;
        }
    }
    printf("%d",count);
    return 0;
}