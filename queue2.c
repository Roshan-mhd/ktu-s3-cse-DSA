#include<stdio.h>
#define MAX_SIZE 3
int queue[MAX_SIZE], REAR=-1, FRONT=-1, item;
int enqueue(){
	int item;
	if(REAR==MAX_SIZE-1)
    {
		printf("Queue is Full");
        return 0;
	}
    else
    {
		printf("Enter the item to be pushed:");			
		scanf("%d", &item);
		if(REAR==-1 && FRONT==-1)
        {
			REAR=0;
			FRONT=0;
		}
		else
        {
			REAR=REAR+1;
		}
	}
	queue[REAR]=item;
    return 0;
}

int dequeue()
{
	if(REAR==-1 && FRONT==-1){
		printf("Queue is empty");
        return 0;
	}
	else
    {
		if(REAR==FRONT){
			item = queue[FRONT];
			printf("Item Deleted is %d", item);
			FRONT=-1;
			REAR=-1;
		}else{
			item = queue[FRONT];
			printf("Item Deleted is %d", item);
			FRONT+= 1;
		}
	}
    return 0;
}
void display(){
	if(FRONT==-1 && REAR==-1){
		printf("Queue is Empty");
	}else{
		for(int i=FRONT; i<=REAR; i++){
			printf("Queue elements are\t");
			printf("%d \t", queue[i]);
		}
	}
}
void main()
{
    int c;
	do{
	printf("\n 1. Enqueue\n 2. Dequeue\n 3. Display\n 4. Exit\n");
	printf("Enter your choice:");
	scanf("%d", &c);
	switch(c)
    {
		case 1: 
			enqueue();
			break;
		case 2:
			dequeue();
			break;
		case 3:
			display();
			break;
		case 4:
			printf("exiting...");
			break;
		default:
			printf("Invalid choice try again");
			break;
	    }
	 }while(c!=4);
}