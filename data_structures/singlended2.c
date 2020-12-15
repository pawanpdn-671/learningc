#include<stdio.h>
int arr[100],num,font=-1,rar=-1;
void rearins(int);
void fontdel();
void reardel();
void prntt();
int main()
{
    int select,i1;
    printf("\nEnter the number of element in the Queue : ");
    scanf("%d",&num);
    while(select!=0)
    {
        printf("\n1. Rear Insertion");
        printf("\n2. Front Deletion");
        printf("\n3. Rear Deletion");
        printf("\n4. Print the Queue");
        printf("\nPress 0 to Exit");
        printf("\nEnter your choice : ");
        scanf("%d",&select);
        switch(select)
        {
            case 1: printf("\nEnter the number you want to insert in rear : ");
                    scanf("%d",&i1);
                    rearins(i1);
                    break;

            case 2: fontdel();
                    break;

            case 3: reardel();
                    break;

            case 4: prntt();
                    break;

            default:    printf("\nYou Successfully Exited\n");
                        break;
        }
    }
    return 0;
}

void rearins(int i1)
{
    if(rar==num-1)
    {
        printf("\nThe Queue is Full, Operation can't be perform!!!");
    }
    else
    {
        rar++;
        arr[rar]=i1;
        printf("\nRear insertion is Successsful");
    }
    
}

void fontdel()
{
    int i;
    if(font==-1&&rar==-1)
    {
        printf("\nThe Queue is Empty, Can't Delete!!!");
    }
    else
    {
        for(i=0;i<=rar;i++)
        {
            arr[i]=arr[i+1];
        }
        rar--;
        printf("\nFront deletion is Successful");
    }

    
}

void reardel()
{
    if(font==-1&&rar==-1)
    {
        printf("\nThe Queue is empty, can't delete");
    }
    else
    {
        rar=rar-1;
        printf("\nRear Deletion is successful");
    }
    
}

void prntt()
{
    int c;
    if(font==-1&&rar==-1)
    {
        printf("\nThe Queue is Empty");
    }
    else
    {
        printf("The Elements are : ");
        for(c=0;c<=rar;c++)
        {
            printf("%d ",arr[c]);
        }
    }
    
}