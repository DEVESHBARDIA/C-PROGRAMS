#include <stdio.h>
#include <stdlib.h>
int n=6;
int pos;
int a[100]={10,20,30,40,50,60,70};
int insert_element();
int delete_element();
int display_array();

int insert_element()
{
	int ele;
	printf("Enter the element to be inserted: ");
	scanf("%d",&ele);
	printf("Enter the position where you want to insert: ");
	scanf("%d",&pos);
	for (int i=n;i>=pos;i--)
	{
		a[i] = a[i-1];
	}
	a[pos-1] = ele;
	n = n + 1;
	printf("Hurray Element inserted!");
}

int delete_element()
{
	int ele;
	printf("Enter the position to be deleted: ");
	scanf("%d",&pos);
	int temp = a[pos-1];
	for(int i=pos-1;i<n-1;i++)
	{
		a[i] = a[i+1];
	}
	n = n - 1;
}


int display_array()
{
	printf("The array elements are:\n");
	for (int i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}
int main()
{
	int choice;
	while (1) 
	{
		printf("\n---------------------- Menu------------------------\n");
		printf("1.Insert an element\n2.Delete an element\n3.Display the Array\n4.Exit\n");
		printf("Enter the choice you want to Perform:\n");
		scanf("%d",&choice);
		switch (choice)
		{
			case 1: insert_element();
					break;
			case 2: delete_element();
					break;
			case 3: display_array();
					break;
			case 4: exit(0);
					break;
			default: printf("Invalid Choice!");
		}
	}
}
