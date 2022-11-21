#include <stdio.h>
#include <stdlib.h>

int n;
int a[100];
int display_array();
int create_array()
{
	printf("Enter the number of elements:");
	scanf("%d",&n);
	printf("Enter the elements: ");
	for (int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Array created!");
	return 0;
}

int display_array()
{
	printf("The array elements are: ");
	for (int i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}
int main()
{
	int choice;
	while (1) 
	{
		printf("\n---------------------- Menu------------------------\n");
		printf("1.Create an Array\n2.Display an Array\n3.Exit\n");
		printf("Enter the choice you want to Perform:\n");
		scanf("%d",&choice);
		switch (choice)
		{
			case 1: create_array();
					break;
			case 2: display_array();
					break;
			case 3: exit(0);
					break;
			default: printf("Invalid Choice!");
		}
	}
}
