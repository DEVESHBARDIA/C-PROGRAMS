#include<stdio.h>
#include<stdlib.h>
struct linked
{
	int item;
	struct linked *next;
};
typedef struct linked node;
node *start,*ptr,*new_node,*temp;
int ele,i,n,key,flag=0;

void create(int ele)
{
	new_node = (node*)malloc(sizeof(node));
	new_node->item = ele;
	new_node->next = NULL;
}

void create_list(int n)
{
	for(i=1;i<=n;i++)
	{
		printf("Enter the element you want to insert: ");
		scanf("%d",&ele);
		create(ele);
		if(i==1)
			start = new_node;
		else
		{
			ptr = start;
			while(ptr->next!=NULL)
				ptr = ptr->next;
			ptr->next = new_node;
		}
	}
}

void display()
{
	ptr = start;
	while(ptr!=NULL)
	{
		printf("%d->",ptr->item);
		ptr = ptr->next;
	}
	printf("NULL");
}

void linear_search(int key)
{
	ptr = start;
	while(ptr!=NULL)
	{	
		if(ptr->item==key)
		{
			printf("Your element is found!");
			return;
		}
		else
		{
		ptr = ptr->next;
		}
	}
		printf("Element not found!");
}


int main()
{
	int choice;
	while (1) 
	{
		printf("\n---------------------- Menu------------------------\n");
		printf("1.Create a Linked_List\n2.Linear Search\n3.Display\n4.Exit\n");
		printf("Enter the choice you want to Perform:\n");
		scanf("%d",&choice);
		switch (choice)
		{
			case 1: create_list(5);
					break;
			case 2: printf("Enter the element you want to search: ");
					scanf("%d",&key);
					linear_search(key);
					break;
			case 3: display();
					break;
			case 4: exit(0);
					break;
			default: printf("Invalid Choice!");
		}
	}
}
