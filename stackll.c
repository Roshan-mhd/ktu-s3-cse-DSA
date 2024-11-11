#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
    
};
 struct node *top = NULL;
void push(int v){
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    if(newnode==NULL){
        printf("\nMemory alloctaion failed");
    }else{
        newnode->data = v;
        newnode->next = top;
        top = newnode;
        printf("Insertion sucessfull");
    }
}
void pop(){
    if(top==NULL){
        printf("Stack is empty");
    }else{
        struct node *temp = top;
        printf("\n%d is deleted sucessfully",temp->data);
        top=top->next;
        free(temp);
        }
}
void display(){
    struct node *temp = top;
    if(top==NULL){
        printf("\n Stack is empty");
    }else{
        printf("\nElements are: \n");
        while(temp!=NULL){
            printf("%d\n",temp->data);
            temp=temp->next;
    }
    }

}
void main(){
   int c,v;do{
   printf("\nEnter the choice from the menu given below\n");
   printf("1)Push\n2)Pop\n3)Display\n4)Exit\n");
   scanf("%d",&c);
   switch(c){
        case 1:printf("\nEnter element to be pushed: ");
        scanf("%d",&v);
        push(v);
        break;
        case 2:pop();
        break;
        case 3:display();
        break;
        case 4:printf("Exiting...");
        default:printf("\n invalid choice try again");
   }
   }while(c!=4);

}