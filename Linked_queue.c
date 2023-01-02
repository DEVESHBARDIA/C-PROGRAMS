#include<stdio.h>
#include<stdlib.h>

struct queue
{
	int item;
	struct queue *next;
};
typedef struct queue node;
node *rear,*front,*ptr,*new_node,*temp;

int ele=0;

void create(int ele)
{
	new_node = (node*)malloc(sizeof(node));
	new_node->item = ele;
	new_node->next = NULL;
}

void insert(int ele)
{
	create(ele);
	if(rear==NULL)
	{
		rear = new_node;
		front = new_node;
	}
	else
	{
		rear->next = new_node;
		rear = new_node;
	}
}

int delete()
{
	if(front==NULL)
	{
		printf("QUEUE IS EMPTY!");
		return 0;
	}
	else
	{
		temp = front;
		front = temp->next;
		printf("deleted element is: %d",temp->item);
		free(temp);
		return 0;
	}
}

void display()
{
	ptr = front;
	while(ptr!=NULL)
	{
		printf("%d\n",ptr->item);
		ptr = ptr->next;
	}
	printf("NULL");
}



int main()
{
	int choice;
	while (1) 
	{
		printf("\n---------------------- Menu------------------------\n");
		printf("1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
		printf("Enter the choice you want to Perform:\n");
		scanf("%d",&choice);
		switch (choice)
		{
			case 1: printf("Enter the element: ");
					scanf("%d",&ele);
					insert(ele);
					break;
			case 2: delete();
					break;
			case 3: display();
					break;
			case 4: exit(0);
					break;
			default: printf("Invalid Choice!");
		}
	}
}
