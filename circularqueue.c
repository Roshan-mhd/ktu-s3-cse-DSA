#include<stdio.h>
#define max 5
int front=-1,rear=-1,i,cq[100],item;
int enq()
{
	if((front==0&&rear==max-1)||(front==rear+1))
	{
		printf("\nQueue is overflow");
		return 0;
	}
	if(front==-1)
	{
		front=rear=0;
	}
	else if(rear==max-1)
	{
		rear=0;
	}
	else
	{
		rear++;
	}
	printf("\nEnter the item\t");
	scanf("%d",&item);
	cq[rear]=item;
	return 0;
}
int dq()
{
	if(front==-1)
	{
		printf("\nQueue underflow");
	}
	else
	{
		item=cq[front];
		if(front==rear)
		{
			front=rear=-1;
			printf("\n %d is deleted sucessfully from  the circular queue",item);
		}
		else if(front==max-1)
		{
			front=0;
			printf("\n %d is deleted sucessfully from  the circular queue",item);
		}
		else
		{
			front++;
			printf("\n %d is deleted sucessfully from  the circular queue",item);
		}
	}
	return 0;
}
int display()
{
	if(front==-1)
	{
		printf("Queue is underflow");
		return 0;
	}
	else 
	{
		if(front<rear)
		{
			for(i=front;i<=rear;i++)
			{
				printf("%d\t",cq[i]);
			}
		}
		else 
		{
			for(i=front;i<=max-1;i++)
			{
				printf("%d\t",cq[i]);
			}
			for(i=0;i<=rear;i++)
			{
				printf("%d\t",cq[i]);
			}
		}
	}
	return 0;
}
void main()
{
	int c;
	do
	{
		printf("\n Enter your option from the options given below \n");
		printf("1)Enque \n2)Dequeue \n3)Display \n4)Exit\n ");
		scanf("%d",&c);
		switch(c)
			{
				case 1:enq();
				break;
				case 2:dq();
				break;
				case 3:display();
				break;
				case 4:printf("\nExiting...");
				break;
				default:printf("\nInvalid option");
				break;
			}
	}while(c<4);
}















