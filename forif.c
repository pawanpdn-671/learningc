#include<stdio.h>
int main()
{
    int arr[100],odd=0,even=0,ar,i;
    printf("Number of the Elements in an Array");
    scanf("%d",&ar);
    printf("Enter the array :");
    for(i=0;i<ar;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The number of elements that is even are : ");
    for(i=0;i<ar;i++)
    {
        if(arr[i]%2==0)
        {
            even=even+1;
        }
        
    }
    printf("%d",even);
    printf("\nThe number of elements that is odd are :");
    for(i=0;i<ar;i++)
    {
        if(arr[i]%2==1)
        {
            odd=odd+1;
        }
    }
    printf("%d",odd);
    return 0;
}