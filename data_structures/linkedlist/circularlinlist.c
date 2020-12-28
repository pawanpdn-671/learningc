#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
struct Node *head;

void createlinklist();
void frontinsert();
void endinsert();
void insertany();
void frontdel();
void delend();
void delany();
int search();
void printlist();

int main()
{
    int choice;
    while(choice!=0)
    {
        printf("\n---------------MAIN  MENU---------------\n");
        printf("\n1. Create a Linked List");
        printf("\n2. Insert at the beginning of the list");
        printf("\n3. Insert at the end of the list");
        printf("\n4. Insert at a specific point");
        printf("\n5. Delete an element from the beginning of the list");
        printf("\n6. Delete an element from the end of the list");
        printf("\n7. Delete an element from a specific point");
        printf("\n8. Search an element from the list");
        printf("\n9. Print the Linked List\n");
        printf("\n Enter Your Choice : ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1: createlinklist();
                    break;

            case 2: frontinsert();
                    break;

            case 3: endinsert();
                    break;

            case 4: insertany();
                    break;

            case 5: frontdel();
                    break;

            case 6: delend();
                    break;

            case 7: delany();
                    break;

            case 8: search();
                    break;

            case 9: printlist();
                    break;

            default: printf("\nYou Successfully Exited\n");
                    break;

        }

    }

    return 0;
}

 void createlinklist()
 {
     struct Node *ptr;
     int num;
     ptr=(struct Node*)malloc(sizeof(struct Node*));
    
     if(ptr==NULL)
     {
         printf("\nThe Memory is Full");
     }
     else
     {
         printf("\nEnter a number : ");
         scanf("%d",&num);
         ptr->data=num;
         ptr->next=ptr;
         head=ptr;
         printf("\nThe list is created successfully");
     }
 }

 void frontinsert()
 {
     struct Node* ptr, *newnode;
     int frontins;
     newnode=(struct Node*)malloc(sizeof(struct Node*));
     ptr=head;
     if(head==NULL)
    {
        printf("\nThe list is empty");
    }
    else
    {
        if(newnode==NULL)
        {
            printf("\nThe Memory is Full");
        }
        else
        {
            printf("\nEnter the number you want to insert in the Beginning : ");
            scanf("%d",&frontins);
            newnode->data=frontins;
            while(ptr->next!=head)
            {
                ptr=ptr->next;
            }

            ptr->next=newnode;
            newnode->next=head;
            head=newnode;
            
            printf("\nThe element is inserted successfully"); 
        }
    }

 }

 void endinsert()
 {
     struct Node *ptr,*newnode;
     ptr=head;
     int endins;
     newnode=(struct Node*)malloc(sizeof(struct Node*));
     if(head==NULL)
     {
         printf("\nThe list is not created yet");
     }
     else
     {
         if(newnode==NULL)
         {
             printf("\nThe memory is full");
         }
         else
         {
             printf("\nEnter the number you want to insert in the end : ");
             scanf("%d",&endins);
             newnode->data=endins;
             while(ptr->next!=head)
             {
                 ptr=ptr->next;
             }

             ptr->next=newnode;
             newnode->next=head;
             printf("\nElement inserted successfully");
         }
     }
 }

 void insertany()
 {
     struct Node *ptr,*newnode,*hold;
     int inp,num,k=0;
     newnode=(struct Node*)malloc(sizeof(struct Node*));
     ptr=head;
     hold=head;

     if(head==NULL)
     {
         printf("\nThe list is empty");
     }
     else
     {
         if(newnode==NULL)
         {
             printf("\nThe Memory is Full");
         }
         else
         {
             printf("\nEnter the index after which you to insert : ");
             scanf("%d",&num);
             printf("\nEnter the number you want to insert : ");
             scanf("%d",&inp);
             newnode->data=inp;
             while((num-1)!=k)
             {
                 ptr=ptr->next;
                 hold=hold->next;
                 k++;
             }
             hold=hold->next;
             ptr->next=newnode;
             newnode->next=hold;
             printf("\nElement inserted successfully");

         }
     }

 }

 void frontdel()
 {
        struct Node* ptr,*del;
        ptr=head;
        del=head;
        if(head==NULL)
        {
            printf("\nThe list is empty, cannot delete !");
        }
        else
        {
            while(ptr->next!=head)
            {
                ptr=ptr->next;
            }
            head=head->next;
            ptr->next=head;
            free(del);
            printf("\nElement is deleted successfully");
        }

 }

 void delend()
 {
     struct Node *del,*ptr;
     del=head;
     ptr=head;
     while(del->next!=head)
     {
         del=del->next;
     }
     while(ptr->next!=del)
    {
        ptr=ptr->next;
    }
    ptr->next=head;
    free(del);
    printf("\nThe end element is deleted successfully");

 }

 void delany()
 {
     struct Node* del,*ptr,*hold;
     int num,k=0;
     del=head;
     ptr=head;
     hold=head;
     if(head==NULL)
     {
         printf("\nThe list is empty");

     }
     else
     {
         printf("\nEnter the index which to be deleted : ");
         scanf("%d",&num);
         while((num-1)!=k)
         {
             del=del->next;
             hold=hold->next;
             k++;
         }
         hold=hold->next;
         ptr->next=hold;
         free(del);
         printf("\nThe element is deleted successfully");
     }
 }

 int search()
 {
     struct Node* search;
     int inp,k=1;
     search=head;
     if(head==NULL)
     {
         printf("\nThe list is empty, no element to search ");
     }
     else
     {
         printf("\nEnter the element to search : ");
         scanf("%d",&inp);
         while(search->next!=head)
         {
             if(search->data==inp)
            {
                printf("\n%d is there in the position %d .",inp,k);
            
                return 0;
            }
            
            search=search->next;
            k++;

         }
         if(inp==search->data)
         {
             printf("\n%d is there in the position %d .",inp,k);
         }
         else
         {
             printf("\nElement is not there in the list");
         }

     }
 }

 void printlist()
 {
    struct Node *ptr;
    ptr=head;
    if(head==NULL)
    {
        printf("\nThe list is not created");
    }
    else
    {
        while(ptr->next!=head)
        {
            printf("%d -> ",ptr->data);
            ptr=ptr->next;
        }
        printf("%d -> %d",ptr->data,head->data);
    }
 }