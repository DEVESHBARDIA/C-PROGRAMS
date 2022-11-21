#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
int s[10],top=-1,ele,i;
int underflow()
{
	if (top == -1)
		return 1;
	else
		return 0;
}

void pop()
{
	if(underflow())
	{
		printf("Stack is Empty");
	}
	else
		printf("Popped Element : %d",s[top--]);
}

int overflow()
	{
	if(top>= SIZE - 1)
		return 1;
	else
		return 0;
}

void push(int ele)
{
	if(overflow())
	{
		printf("Stack is Full");
	}
	else
		s[++top] = ele;
}

int display_array()
{
	printf("Top :%d\n",top);
	for (int i=top;i>=0;i--)
	{
		printf("| %d |\n",s[i]);
	}
	return 0;
}


int main()
{
	int choice;
	while (1) 
	{
		printf("\n----------------------Stack Implementation------------------------\n");
		printf("1.Push\n2.Pop\n3.Display\n4.Exit\n");
		printf("Enter the choice you want to Perform:\n");
		scanf("%d",&choice);
		switch (choice)
		{
			case 1: printf("Enter the Element: ");
					scanf("%d",&ele);
					push(ele);
					break;
			case 2: pop();
					break;
			case 3: display_array();
					break;
			case 4: exit(0);
					break;
			default: printf("Invalid Choice!");
		}
	}
}
