#include<stdio.h>
#include<math.h>
int main()
{
	int n,i;
	float sd,var, mean;
	float a[20];
	float *ptr;
	ptr =a;
	
	printf("ENTER THE NUMBER OF ELEMENTS");
	scanf("%d",&n);
	for (i=0; i<n; i++)
	{
		scanf("%f",ptr);
		ptr++;
	}
	ptr = a;
	float sum=0;
	for (int i=0; i<n; i++)
	{
		sum = sum + *ptr;
		ptr++;	
	}
	mean = sum/n;
	ptr = a;
	var = 0;
	for (int i=0; i<n; i++)
	{
		var = var+ pow((*ptr-mean),2);
		ptr++;	
	}
	var = var/n;
	sd = sqrt(var);
	printf("THE MEAN IS : %f \n",mean);
	printf("THE SUM IS : %f \n",sum);
	printf("THE STANDARD DEVIATION IS : %f\n ",sd);
	return 0;
}
