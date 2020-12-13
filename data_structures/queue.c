#include<stdio.h>
int kyu[100],first=0,last=0,no;
void ins(int);
void del();
void prent();
int main()
{
    int choice,x;
    printf("Enter the number of the element on the queue : ");
    scanf(" %d",&no);
    printf("\nEnter your choice : ");
    scanf("%d",&choice);
    while(choice!=0)
    {    
        printf("1. Insert the element\n");
        printf("2. Delete an element from the Queue\n");
        printf("3. Print the Queue\n");
        printf("Press 0 to exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: printf("Enter the element to insert : ");
                    scanf("%d",&x);
                    ins(x);
                    break;
            
            case 2: del();
                    break;

            case 3: prent();
                    break;
            
            default: printf("\nSuccessfully exited\n");
                     break;
        }
    }
    return 0;
}

void ins(int x)
{
    if(no==last)
    {
        printf("\nThe Queue is full\n");
    }
    else
    {
        
        printf("\nInsertion takes place successfully\n");
        kyu[last]=x;
        last++;
    }
    
}

void del()
{
    int j;
    if(first==last)
    {
        printf("\nThe Queue is empty\n");
    }
    else
    {
        printf("\nDeletion is Successful\n");
        for(j=0;j<last-1;j++)
        {
            kyu[j]=kyu[j+1];
        }
        last--;
    }
   
}

void prent()
{
    int i;
    if(first==last)
    {
        printf("\nThe Queue is Empty\n");
        
    }
    else
    {
        printf("\nThe elements of the Queue are : ");
        for(i=0;i<last;i++)
        {
            printf("%d ",kyu[i]);
        }
    }
    
}