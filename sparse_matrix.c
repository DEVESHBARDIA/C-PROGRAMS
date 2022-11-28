#include<stdio.h>
struct sparse
{
	int row;
	int col;
	int value;
}t[20];
int main()
{
	int row,col,i,j,count=0;
	int a[20][20];
	printf("Enter the number of rows and columns: ");
	scanf("%d %d",&row,&col);
	t[0].row = row;
	t[0].col = col;
	printf("Enter the elements : ");
	for (i=0;i<row;i++)
	{
		for (j=0;j<col;j++)
		{
			scanf("%d",&a[i][j]);
			if (a[i][j]!=0)
			{
				count++;
				t[count].row=i;
				t[count].col=j;
				t[count].value = a[i][j];
			}
		}
	}
	t[0].value = count;
	printf("Index\tRow\tCol\tValue\n");
	for (i=0;i<=count;i++)
	{
	
			printf("t[%d]\t%d\t%d\t%d\n",i,t[i].row,t[i].col,t[i].value);	
	
	}
	return 0;
}
