#include<stdio.h>
int no,arr[100],front=0,back=-1;
void ins1(int);
void ins2(int);
void del1();
void del2();
void prnt();
int main()
{
    int choice,inp1,inp2;
    printf("Enter the no of element : ");
    scanf("%d",&no);
    while(choice!=0)
    {
        printf("\n1. Front Insertion\n");
        printf("2. Rear Insertion\n");
        printf("3. Front Deletion\n");
        printf("4. Rear Deletion\n");
        printf("5. Print\n");
        printf("Press 0 to exit\n");
        printf("Enter Your choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: printf("Enter the number to insert : ");
                    scanf("%d",&inp1);
                    ins1(inp1);
                    break;

            case 2: printf("Enter the number to insert : ");
                    scanf("%d",&inp2);
                    ins2(inp2);
                    break;
                
            case 3: del1();
                    break;

            case 4: del2();
                    break;

            case 5: prnt();
                    break;

            default:    printf("\nYou Exited\n");
                        break;
        }
    }
    return 0;
}

void ins1(int inp1)
{
   int i;
   if(back==no-1)
   {
        printf("\nThe Queue is full");
   }
   else
   {
       if(front==-1&&back==-1)
       {
           
           front++;
           back++;
           arr[front]=inp1;
           printf("\nFront insertion is successful");
       }
       else
       {
           for(i=back;i>=0;i--)
           {
               arr[i+1]=arr[i];
           }
           back++;
           arr[front]=inp1;
           printf("\nFront insertion is successfull");   
       }
       
   }

}
void ins2(int inp2)
{
    if(back==no-1)
    {
        printf("\nThe Queue is Full");
    }
    else
    {
        
        back++;
        arr[back]=inp2;
        printf("\nRear insertion is successful");
        
    }
    
}
void del1()
{
    int i;
    if(front==-1&&back==-1)
    {
        printf("\nThe Queue is Empty");
    }
    else
    {
        printf("\nFront deletion is successful");
        for(i=0;i<=back;i++)
        {
            arr[i]=arr[i+1];
        }
        
    }
    
}

void del2()
{
    int j;
    if(front==-1&&back==-1)
    {
        printf("\nThe Queue is Empty");
    }
    else
    {
        back=back-1;
        printf("\nThe rear deletion is successful");
    }
    
}

void prnt()
{
    int z;
    if(arr[front]==0&&arr[back]==0)
    {
        printf("\nThe Queue is empty, Nothing to print");
    }
    else
    {
        printf("The elements are : ");
        for(z=0;z<=back;z++)
        {
            printf("%d ",arr[z]);
        }
    }
    
}