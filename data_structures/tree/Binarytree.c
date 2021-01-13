#include <stdio.h>
#include <stdlib.h>

struct Node
{
        int data;
        struct Node *left;
        struct Node *right;
};

struct Node *bstroot;

void createList();
void insertNode();
void deleteNode();
void search();
void printTree();

int main()
{
        int choice;
        while (choice != 0)
        {
                printf("\n\n--------------------MAIN MENU--------------------\n");
                printf("\n1. Create the Binary Search Tree");
                printf("\n2. Insert an element from the tree");
                printf("\n3. Delete an element from the tree");
                printf("\n4. Search an element");
                printf("\n5. Display the tree");
                printf("\n Press 0 to Exit");
                printf("\nEnter the choice : ");
                scanf("%d", &choice);
                switch (choice)
                {
                case 1:
                        createList();
                        break;

                case 2:
                        insertNode();
                        break;

                case 3:
                        deleteNode();
                        break;

                case 4:
                        search();
                        break;

                case 5:
                        printTree();
                        break;

                default:
                        printf("\nYou Successful Exited\n");
                        break;
                }
        }

        return 0;
}

void createList()
{
     struct Node *newnode;
     int inp;
     newnode=(struct Node*)malloc(sizeof(struct Node*));
     if(newnode==NULL)
     {
            printf("\nThe memory is full"); 
     }
     else
     {
             printf("\nEnter the number you want to insert in the RootNode : ");
             scanf("%d",&inp);
             newnode->data=inp;
             newnode->left=NULL;
             newnode->right=NULL;
             bstroot=newnode;
             printf("\nThe element is inserted successfully ! ");
     }
        
}

void insertNode()
{
        struct Node *ptr, *newnode, *parent;
        newnode=(struct Node*)malloc(sizeof(struct Node*));
        ptr=bstroot;
        if(bstroot==NULL)
        {
                printf("\nThe Tree is not created Yet, Please create a tree to insert");
        }
        else
        {
                if(newnode==NULL)
                {
                        printf("\nThere is no memory space to insert any element");
                }
                else
                {
                        printf("\nEnter the element you want to insert in the tree : ");
                        scanf("%d",&newnode->data);
                        newnode->left=NULL;
                        newnode->right=NULL;
                        while(ptr)
                        {
                                parent=ptr;
                                if((newnode->data)>(ptr->data))
                                {
                                        ptr=ptr->right;
                                }
                                else
                                {
                                        ptr=ptr->left;
                                }
                        }

                        if((parent->data)>(newnode->data))
                        {
                              parent->left=newnode;
                        }
                        else
                        {
                                parent->right=newnode;
                        }
                        printf("\n The element is inserted successfully !");

                }
        }
}

void deleteNode()
{
        struct Node *ptr, *leafnode;
        leafnode=bstroot;
        if(bstroot==NULL)
        {
                printf("\nThere is no element to delete !");
        }

        else
        {
                if(bstroot->left==NULL&&bstroot->right==NULL)
                {
                        bstroot=NULL;
                        printf("\n The element is deleted successfully !");
                }
                else
                {
                        while(leafnode->left!=NULL&&leafnode->right!=NULL)
                        {
                                ptr=leafnode;
                                if(leafnode->left!=NULL)
                                {
                                        leafnode=leafnode->left;
                                }
                                else
                                {
                                        leafnode=leafnode->right;
                                }
                        }
                        if(ptr->left==leafnode)
                        {
                                ptr->left=NULL;
                                free(leafnode);
                        }
                        else
                        {
                                ptr->right=NULL;
                                free(leafnode);
                        }
                        
                        printf("\nThe element is deleted successfully ");
                }
        }
}

void search()
{

}

void printTree()
{

}