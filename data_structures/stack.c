#include<stdio.h>
int arr[100],no,top=-1;
int push(int fill);
void pop();
void peek();
void prinelements();
int main()
{
    int fill,choice;
    printf("Enter the number of the elements in the Array : \n");
    scanf("%d",&no);
   while(choice!=0)
  {
    printf("1. Push the element in the Stack\n");
    printf("2. Pop an element from the Stack\n");
    printf("3. Peek the top element of the Stack\n");
    printf("4. Print the Stack\n");
    printf(" Tap 0 to exit\n");
    printf("Enter Your Choice : ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: printf("Enter the element to push in the Array : ");
                scanf("%d",&fill);
                push(fill);
                break;
        case 2: pop();
                break;
        case 3: peek();
                break;
        case 4: prinelements();
                break;
        default: printf("Successfully exited!!!\n");
                break;
    }
  }
    return 0;
}
int push(int fill)
{
    if(top==no-1)
    {
        printf("The no of elements are filled full\n");
        return 0;
    }
    else
    {
        top=top+1;
        arr[top]=fill;
        printf("The push process is successfullly applied !\n");
    }
}
void pop()
{
    if(top==-1)
    {
        printf("Sorry, the Stack is Empty!\n");
    }
    else
    {
        top=top-1;
        printf("The pop process is successfully applied !\n");
    }
}
void peek()
{
    if(top==-1)
    {
        printf("There is no element to peek\n");
    }
    else
    {
        printf("The top element of the stack is %d\n",arr[top]);
    }
}
void prinelements()
{
    int l;
    if(top==-1)
    {
        printf("The stack is Empty!\n");
    }
    else{
    printf("The elements are : ");
    for(l=0;l<=top;l++)
    {
        printf("%d ",arr[l]);
    }
    printf("\n");
    }
}