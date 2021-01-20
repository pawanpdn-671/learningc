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
struct Node *deleteNode(struct Node *bstroot, int key);
int search(struct Node *bstroot, int key);
void printInorder(struct Node *inorderNode);
void printPreorder();
void printPostorder();
struct Node* minValueNode(struct Node* leftmostN);

int main()
{
        int choice,key1,key2,d;
        
        struct Node *output;
        
        while (choice != 0)
        {
                printf("\n\n--------------------MAIN MENU--------------------\n");
                printf("\n1. Create the Binary Search Tree");
                printf("\n2. Insert an element from the tree");
                printf("\n3. Delete an element from the tree");
                printf("\n4. Search an element");
                printf("\n5. Display the Elements in In-Order");
                printf("\n6. Display the Elements in Pre-Order");
                printf("\n7. Display the Elements in Post-Order");
                printf("\n Press 0 to Exit");
                printf("\nEnter the choice : ");
                scanf("%d", &choice);
                switch (choice)
                {
                case 1:
                        createList();
                        break;

                case 2:
                        if(bstroot==NULL)
                        {
                                printf("\nCreate a Binary Search tree first, to insert an element .");
                        }
                        else        
                        {     
                                insertNode();
                        }
                        break;

                case 3:
                        if(bstroot==NULL)
                        {
                                printf("\nCreate a Binary Search tree first, to delete an element .");
                        }
                        else        
                        {        
                                printf("\nEnter the number you want to delete : ");
                                scanf("%d",&key1); 
                                d=search(bstroot,key1);
                                if(d==key1)
                                {
                                        deleteNode(bstroot,key1);
                                        printf("\nThe given number(%d) is successfully deleted !",key1);
                                }
                                else
                                {
                                        printf("\nElement not found !");
                                }
                        }
                        break;

                case 4:
                        if(bstroot==NULL)
                        {
                                printf("\nCreate a Binary Search tree first, to search an element .");
                        }        
                        else
                        {
                        
                                printf("\nEnter the number you want to search : ");
                                scanf("%d",&key2);
                                d=search(bstroot, key2);
                                if(d==key2)
                                {
                                        printf("\n%d is found successfully !",key2);
                                }
                                else
                                {
                                        printf("\nElement not found ");
                                }
                        }
                        break;

                case 5:
                        
                        if(bstroot==NULL)
                        {
                                printf("\nCreate a Binary Search tree first, to print the element .");
                        }        
                        else
                        {
                                
                                printf("\nThe elements in In-Order are : ");
                                printInorder(bstroot);
                         }
                        
                        break;

                case 6:
                        
                        if(bstroot==NULL)
                        {
                                printf("\nCreate a Binary Search tree first, to print the element .");
                        }        
                        else
                        {
                                
                                printf("\nThe elements in Pre-Order are : ");
                                printPreorder(bstroot);
                         }
                        
                        break;

                case 7:
                        
                        if(bstroot==NULL)
                        {
                                printf("\nCreate a Binary Search tree first, to print the element .");
                        }        
                        else
                        {
                                
                                printf("\nThe elements in Post-Order are : ");
                                printPostorder(bstroot);
                         }
                        
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

struct Node *deleteNode(struct Node *bstroot, int key)
{
        struct Node *ptr;
        

        if(bstroot==NULL)
        {
                return bstroot;
        }
        else if(key<bstroot->data)
        {
                bstroot->left=deleteNode(bstroot->left,key);
        }
        else if(key>bstroot->data)
        {
                bstroot->right=deleteNode(bstroot->right,key);
        }
        else
        {
                if(bstroot->left==NULL)
                {
                        ptr=bstroot->right;
                        free(bstroot);
                        return ptr;
                }
                else if(bstroot->right==NULL)
                {
                        ptr=bstroot->left;
                        free(bstroot);
                        return ptr;
                }
                else
                {
                        ptr=minValueNode(bstroot->right);
                        bstroot->data=ptr->data;
                        bstroot->right=deleteNode(bstroot->right,ptr->data);
                }
        }
        return bstroot;
        
}

int search(struct Node *bstroot,int key)
{
        if(bstroot==NULL)
        {
                return 0;
        }
        else if(key==bstroot->data)
        {
                return key;
        }
        else if(key<bstroot->data)
        {
                return search(bstroot->left,key);
        }
        else if(key>bstroot->data)
        {
                return search(bstroot->right,key);
        }
        else
        {
                return 0;
        }
}

void printInorder(struct Node *inorderNode)
{
        if(inorderNode!=NULL)
        {
                printInorder(inorderNode->left);
                printf("%d -> ",inorderNode->data);
                printInorder(inorderNode->right);
        }
}

void printPreorder()
{

}

void printPostorder()
{

}

 struct Node* minValueNode(struct Node *leftmostN)
{
        while(leftmostN->left!=NULL)
        {
                leftmostN=leftmostN->left;
        }
        return leftmostN;
}