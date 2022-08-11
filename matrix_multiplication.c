#include <stdio.h>
int main()
{
	int m,n,p,q,i,j,k ;
	printf("Enter size of matrix A:");
	scanf ("%d%d",&m,&n);
	printf("Enter size of matrix B:"); 
	scanf ("%d%d",&p,&q); 
	 
	if (n!=p)
	{
		printf("MULTIPLICATION NOT POSSIBLE");
		return 1;
	}


				//ACCEPTING THE VALUES IN MATRICES//
	
	printf("Enter the elements of Matrix A :");
	int a[m][n], b[p][q], c[m][q];
	for (i=0; i<m; i++)
	{
		for (j=0; j<n; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("Matrix A\n");
	for (i=0; i<m; i++)
	{
		for (j=0; j<n; j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	
	printf("Enter the elements of Matrix B :");
	for (i=0; i<p; i++)
	{
		for (j=0; j<q; j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	
	printf("Matrix B\n");
	for (i=0; i<p; i++)
	{
		for (j=0; j<q; j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	
	printf("VALUE OF A x B IS :\n");
	for (i=0; i<m; i++)
	{
		for (j=0; j<q; j++)
		{
			int sum = 0;
			for (k=0; k<n; k++)
			{
				sum = sum + a[i][k] * b[j][k];
				c[i][j] = sum;
			}	
		}
	}

	for (i=0; i<m; i++)
	{
		for (j=0; j<q; j++)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}
