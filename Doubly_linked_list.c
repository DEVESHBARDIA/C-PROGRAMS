#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct DLL
{
	char name[30],id[20],branch[20],area[20];
	struct DLL *next,*prev;
};
typedef struct DLL node;
node *start,*ptr,*new_node,*temp;

void create()
{
	new_node = (node*)malloc(sizeof(node));
	new_node->next = NULL;
	new_node->prev = NULL;
	printf("Enter the Name: ");
	scanf("%s",new_node->name);
	printf("Enter the ID: ");
	scanf("%s",new_node->id);
	printf("Enter the Branch: ");
	scanf("%s",new_node->branch);
	printf("Enter the Area of Specialization: ");
	scanf("%s",new_node->area);
}

void create_DLL(int n)
{
	for(int i=1;i<=n;i++)
	{
		create();
		if(i==1)
			start = new_node;
		else
		{
			ptr = start;
			while(ptr->next!=NULL)
				ptr = ptr->next;
			ptr->next = new_node;
			new_node->prev = ptr;
			new_node->next = NULL;
		}
	}
}

void display()
{
	ptr = start;
	while(ptr!=NULL)
	{
		printf("%s\t",ptr->id);
		printf("%s\t",ptr->name);
		printf("%s\t",ptr->branch);
		printf("%s\n",ptr->area);
		ptr = ptr->next;
	}
}


void insert_at_front()
{
	create();
	new_node->next = start;
	new_node->prev = NULL;
	start = new_node;
	
}

void insert_at_end()
{
	create();
	ptr = start;
	while(ptr->next!=NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = new_node;
	new_node->prev = ptr;
	new_node->next = NULL;
}

void delete_at_front()
{
	temp = start;
	start = temp->next;
	free(temp);
	printf("First node deleted Successfully!");
}

void delete_at_end()
{
	ptr = start;
	while(ptr->next!=NULL)
	{
		temp = ptr;
		ptr = ptr->next;
	}
	free(ptr);
	temp->next = NULL;
	printf("Last node deleted!");
}

int main()
{
	int choice;
	while (1) 
	{
		printf("\n---------------------- Menu------------------------\n");
		printf("1.Create a Doubly Linked List\n2.Insert node at Front\n3.Insert node at End\n4.Delete node at Front\n5.Delete node at End\n6.Display\n7.Exit\n");
		printf("Enter the choice you want to Perform:\n");
		scanf("%d",&choice);
		switch (choice)
		{
			case 1: create_DLL(2);
					break;
			case 2: insert_at_front();
					break;
			case 3: insert_at_end();
					break;
			case 4: delete_at_front();
					break;
			case 5: delete_at_end();
					break;
			case 6: display();
					break;
			case 7: exit(0);
					break;
			default: printf("Invalid Choice!");
		}
	}
}
