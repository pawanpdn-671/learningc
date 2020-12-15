#include<stdio.h>
int arr[100],frnt=-1,bck=-1,no;
void inser1(int);
void inser2(int);
void delfront();
void prnt();
int main()
{
    int choice,input1,input2;
    printf("Enter the no of elements on Queue : ");
    scanf("%d",&no);
    while(choice!=0)
    {
        printf("\n1. Front Insertion");
        printf("\n2. Rear Insertion");
        printf("\n3. Front Deletion");
        printf("\n4. Print the queue");
        printf("\nPress 0 to exit");
        printf("\nEnter your Choice");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: printf("\nEnter the number you want to insert : ");
                    scanf("%d",&input1);
                    inser1(input1);
                    break;

            case 2: printf("\nEnter the number you want to insert : ");
                    scanf("%d",&input2);
                    inser2(input2);
                    break;

            case 3: delfront();
                    break;

            case 4: prnt();
                    break;

            default:    printf("You successfully exited");
                        break;
        }
    }
    return 0;
}

void inser1(int input1)
{
    int i;
    if(bck==no-1)
    {
        printf("\nThe Queue is full, can't insert any element");
    }
    else
    {
        if(frnt==-1&&bck==-1)
        {
            frnt++;
            bck++;
            arr[frnt]=input1;
            printf("\nThe element is successfully inserted");
        }
        else
        {
            for(i=bck;i>=0;i--)
            {
                arr[i+1]=arr[i];
            }
            bck++;
            arr[frnt]=input1;
            printf("\nThe element is successfully inserted");
        }
        
    }
}

void inser2(int input2)
{
    if(bck==no-1)
    {
        printf("\nThe Queue is full");
    }
    else
    {
        bck++;
        arr[bck]=input2;
    }
    
}

void delfront()
{
    int j;
    if(frnt==-1&&bck==-1)
    {
        printf("\nThe Queue is Empty, nothing to delete");
    }
    else
    {
        for(j=0;j<=bck;j++)
        {
            arr[j]=arr[j+1];
        }
        printf("\nThe element is successfully deleted");
        bck--;
    }
}

void prnt()
{
    int p;
    if(frnt==-1&&bck==-1)
    {
        printf("\nThe Queue is Empty, Nothing to Print");
    }
    else
    {
        printf("\nThe elements are : ");
        for(p=0;p<=bck;p++)
        {
            printf("%d ",arr[p]);
        }
    }
}