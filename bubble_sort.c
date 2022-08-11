#include <stdio.h>
int main()
{
	int n,i,j,temp;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	int a[n];
	for (int i=0; i<n; i++)
	{
		printf("Enter the elements of array:");
		scanf("%d",&a[i]);
		
	}
	for (i=0; i<n-1; i++)
	{
		for (j=0; j<n-i-1; j++)
		{
			if(a[j]>a[j+1])
			{
				temp = a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}		
		}
	}
	printf("sorted array is");
	for (int j=0; j<n; j++)
	{
		printf("\n%d",a[j]);
	}
	
	int high, low, mid, x;
	low = 0;
	high = n-1;
	printf("\nEnter the number to be searched :");
	scanf("%d",&x);
	while (low<=high)
	{
		mid = (low+high)/2;
		if (x==a[mid])
		{
			printf("element is located at position %d\n",mid+1);
			break;
		}
		else if (x<a[mid])
		{
			high= mid - 1;
		}
		else
		{
			low = mid +1;
		}

	}
	return 0;
}
