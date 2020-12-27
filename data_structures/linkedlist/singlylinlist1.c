#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *link;
};
struct Node *head;

void createlist();
void insertfront();
void insertend();
void insertany();
void delfront();
void delend();
void delany();
int search();
void printlist();

int main()
{
    int choice;
    while(choice!=0)
    {
        printf("\n\n--------------------MAIN MENU--------------------\n");
        printf("\n1. Create a Linkedlist");
        printf("\n2. Insert an element in the beginning");
        printf("\n3. Insert an element in the end");
        printf("\n4. Insert an element anywhere");
        printf("\n5. Delete an element in the beginning");
        printf("\n6. Delete an element in the end");
        printf("\n7. Delete an element from anywhere");
        printf("\n8. Search an element");
        printf("\n9. Display the Linkedlist");
        printf("\n Press 0 to Exit");
        printf("\nEnter the choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: createlist();
                    break;

            case 2: insertfront();
                    break;

            case 3: insertend();
                    break;

            case 4: insertany();
                    break;

            case 5: delfront();
                    break;

            case 6: delend();
                    break;

            case 7: delany();
                    break;

            case 8: search();
                    break;

            case 9: printlist();
                    break;

            default:    printf("\nYou Successful Exited\n");
                        break;
        }
    }
    return 0;
}

void createlist()
{
    struct Node *ptr;
    int num;
    ptr=(struct Node*)malloc(sizeof(struct Node*));
    if(ptr==NULL)
    {
        printf("\nMemory is Full");
    }
    else
    {
        printf("\nEnter a number : ");
        scanf("%d",&num);
        ptr->data=num;
        ptr->link=NULL;
        head=ptr;
        printf("\nLinklist created successfully ! ");

    }
    
}

void insertfront()
{
    struct Node *newnode;

    newnode=(struct Node*)malloc(sizeof(struct Node*));
    
    if(head==NULL)
    {
        printf("\nThe list is not created");
    }
    else
    {
        if(newnode==NULL)
        {
            printf("\nThe memory is full");
        }
        else
        {
            int s;
            printf("Enter the number you want to insert : ");
            scanf("%d",&s);
            newnode->data=s;
            newnode->link=head;
            head=newnode;
            printf("\nThe element is inserted successfully ");
        }
    }
    
    

}

void insertend()
{
    struct Node *ptr, *newnode;
    int num;
    newnode=(struct Node*)malloc(sizeof(struct Node*));
    if(head==NULL)
    {
        printf("\nLinked list is not created");
    }
    else
    {
       if(newnode==NULL)
       {
           printf("\nThe memory is full");
       } 
       else
        {
             ptr=head;
             printf("\nEnter the number you want to insert : ");
             scanf("%d",&num);
             newnode->data=num;
             newnode->link=NULL;
             while(ptr->link!=NULL)
            {
                ptr=ptr->link;
            }
            ptr->link=newnode;
            printf("\n The element is inserted successfully");
        }
    }    
}

void insertany()
{
    struct Node *ptr,*newnode,*next;
    int k=0,a,mid;
    newnode=(struct Node*)malloc(sizeof(struct Node*));
    ptr=head;
    next=head;
    if(head==NULL)
    {
        printf("\nThe list is empty");
        
    } 
    else
    {
        if(newnode==NULL)
        {
            printf("\nThe memory is full");
        }
        else
        {
            printf("\nEnter the index after which you want to insert : ");
            scanf("%d",&a);
            printf("\nEnter the number you want to insert : ");
            scanf("%d",&mid);
            newnode->data=mid;
            newnode->link=NULL;
            while((a-1)!=k)
            {
                ptr=ptr->link;
                next=next->link;
                k++;    
            }
            next=next->link;
            ptr->link=newnode;
            newnode->link=next;
            printf("\nSuccessfully inserted the element");
        }
    }



    
}

void delfront()
{
    struct Node* ptr;
    ptr=head;
    if(head==NULL)
    {
        printf("\nThe list is empty");
    }
    else
    {
        
        head=head->link;
        free(ptr);
        printf("\nThe front deletion is successful");
    }
}

void delend()
{
    struct Node* ptr,*end;
    ptr=head;
    end=head;

    if(head==NULL)
    {
        printf("\nThe list is empty ");
    }
    else
    {
        while(ptr->link!=NULL)
        {
            ptr=ptr->link;
        }    
        while(end->link!=ptr)
        {
            end=end->link;
        }
        end->link=NULL;
        free(ptr);
        printf("\nEnd deletion is successful !");

    }
}

void delany()
{
    struct Node *ptr,*del,*hold;
    int no,z=1;
    ptr=head;
    del=head;
    hold=head;
    if(head==NULL)
    {
        printf("\nThe list is empty");
    }
    else
    {
        printf("\nEnter the index which you want to delete");
        scanf("%d",&no);
        while((no-1)!=z)
        {
            ptr=ptr->link;
            del=del->link;
            hold=hold->link;
        }
        del=del->link;
        hold=del->link;
        ptr->link=hold;
        free(del);
        printf("\nThe element is successfully deleted");
    }
}


int search()
{
    struct Node* search;
    search=head;
    int find;
    if(head==NULL)
    {
        printf("\nThe list is empty, cannot searched any element");
    }
    else
    {
        printf("\nEnter the number you want to find : ");
        scanf("%d",&find);
        while(search!=NULL)
        {
            
            if(search->data==find)
            {
                printf("\n%d is there in the list",find);
                return 0;
            }
            
            else
            {
                if(search->link==NULL&&search->data!=find)
                {
                    printf("\n%d is not there in the list",find);
                }
            }
            search=search->link;
   
        }
        
    }

}

void printlist()
{
    struct Node *prt;
    prt=head;
    if(head==NULL)
    {
        printf("\nThe lists is empty");
    }
    else
    {
        
        printf("The list of elements are : ");
        while(prt!=NULL)
        {
            printf("%d -> ",prt->data);
            prt=prt->link;
            
        }
    }
    
}