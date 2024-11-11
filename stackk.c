#include<stdio.h>
#define max 5
int top=-1,stack[100],item;
int push()
	{
	if(top==max-1)
		{
		printf("stack overflow");
		return 0;
		}
	else
		{
		printf("Enter the item \n");
		scanf("%d",&item);
		top=top+1;
		stack[top]=item;
		}
		return 0;
	}
int pop()
	{
	if(top==-1)
		{
		printf("Stack underflow");
		return 0;
		}
	else
		{
		item=stack[top];
		top--;
		printf("%d is deleted",item);
		}
	}
void display()
	{
	if(top>=0)
		{
		printf("Elements are \n");
		for(int i=top;i>=0;i--)
			{
			printf("%d \n",stack[i]);
			}
		}
	else
		{
		printf("No elements are present in the stack");
		}
	}
void main()
	{
	int ch;
	do
	{
	printf("\n choose your option number \n");
	printf("\n Menu \n\n1)Push \n2)Pop \n3)Display \n4)Exit\n ");
	scanf("%d",&ch);
		switch(ch)
			{
			case 1:push();
			break;
			case 2:pop();
			break;
			case 3:display();
			break;
			case 4:printf("exiting...");
	
			break;
			default: printf("invalid option");
			break;
			}
		}while(ch<4);
	}

	
		
