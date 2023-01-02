#include<stdio.h>
#include<stdlib.h>

struct stack
{
	int item;
	struct stack *next;
};
typedef struct stack node;
node *top,*ptr,*new_node;

int ele=0;

void create(int ele)
{
	new_node = (node*)malloc(sizeof(node));
	new_node->item = ele;
	new_node->next = NULL;
}

void push(int ele)
{
	create(ele);
	if(top==NULL)
	{
		top = new_node;
	}
	else
	{
		new_node->next = top;
		top = new_node;
	}
}

int pop()
{
	if(top==NULL)
	{
		printf("STACK IS EMPTY!");
		return 0;
	}
	else
	{
		ele = top->item;
		ptr = top;
		top = ptr->next;
		free(ptr);
		printf("Popped element is: %d",ele);
		return 0;
	}
}

void display()
{
	ptr = top;
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
		printf("1.Push\n2.Pop\n3.Display\n4.Exit\n");
		printf("Enter the choice you want to Perform:\n");
		scanf("%d",&choice);
		switch (choice)
		{
			case 1: printf("Enter the element: ");
					scanf("%d",&ele);
					push(ele);
					break;
			case 2: pop();
					break;
			case 3: display();
					break;
			case 4: exit(0);
					break;
			default: printf("Invalid Choice!");
		}
	}
}
