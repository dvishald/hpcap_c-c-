#include<stdio.h>
#include<stdlib.h>
#define maxsize 10

void insert();
void delete();
void display();
int front,rear;

int queue[maxsize];

int main()
{
	
	int choice;
	while(choice !=4)
	{
		printf("\n****Menu**********\n");
		printf("\n==========\n");
		
		printf("\n 1.insert element\n 2.delete element\n3.display queue\n4. exit");
		
		printf("enter your choice");
		
		scanf("%d",&choice);
		
		switch(choice)
		{
		case 1:
		insert();
		break;
		
		case 2:
		delete();
		break;
		
		case 3:
		display();
		break;
		
		case 4:
		exit(0);
		break;
		
		default :
		
		printf("Enter valid choice");
			
		}
	
	
	}
	
	void insert()
	{
		int item;
		printf("enter the element: ");
		scanf("%d",&item);
		
		if(rear==maxsize-1)
		{
			printf("overfloe\n");
			return;
		}
		if(front==-1&&rear==-1)
		{
			front=0;
			rear=0;
		}
		else
		{
			rear=rear+1;
			queue[rear]=item;
			printf("\n value inserted ");
		}
	}
	
	void delete()
	{
		int item;
		if(front==-1||front>rear)
		{
			printf("underflow");
			return;
		}
		
		else
		{
			item=queue[front];
			
			if(front==rear)
			{
				front=-1;
				rear=-1;
				
			}
			else
			{
				front= front+1;
				printf("\nvalue deleted %d\n",item);
			}
		}
		
	}
	
	void display()
	{
	
		int i;
		if(rear==-1)
		{
			printf("\n empty queue");
		}
		else
		{
			printf("printint values :.....\n");
			
			for(i=front;i<=rear;i++)
			{
				printf("\n %d",queue[i]);
			}
		}
	}
	
	void exit()
	{
		printf("exited.......");
	}
}
