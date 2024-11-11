#include<stdio.h>
#include<stdlib.h>
int item;
struct node{
    int data;
    struct node* next;
};
struct node* front=NULL;
struct node* rear=NULL;
void enq(int item){
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL){
        printf("\nMemeory allocatio failled");
    }else{
        newnode->data=item;
        newnode->next=NULL;
        if(front==NULL){
            front=rear=newnode;
        }else{
            rear->next=newnode;
            rear=newnode;
        }
    }
}
void dq(){
    struct node* temp=front;
    if(front==NULL){
        printf("\nQueue underflow");
    }else{
        printf("\n%d is deleted",temp->data);
        front=front->next;
        free(temp);
    }
}
void display(){
    struct node* temp=front;
    if(front==NULL){
        printf("\nQueue underflow");
    }
    while(temp!=NULL){
        printf("%d\t",temp->data);
        temp=temp->next;
    }
}
void main(){
    int c;
    do{
         printf("\nEnter the choice from choices given below\t");
        printf("\n 1)push\n 2)pop\n 3)display\n 4)exit\n");
        scanf("%d",&c);
        switch(c){
            case 1:printf("\nEnter the element to push: ");
            scanf("%d",&item);
            enq(item);
            break;
            case 2:dq();
            break;
            case 3:display();
            break;
            case 4:printf("\nExiting...");
            break;
            default: printf("\nInvalid choice please try again");
        }
    }while(c!=4);

}