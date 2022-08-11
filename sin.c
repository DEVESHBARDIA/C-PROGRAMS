#include <stdio.h>
#include <math.h>
#define PI 3.1415
int main()
{
	float x, deg;
	printf("Enter the degree:\n");
	scanf("%f",&deg);
	x = deg * (PI/180);
	
	float num, den, sum, term, i;
	num = x;
	den = 1;
	i = 1;
	sum = 0;
	
	do
	{
		term = num/den;
		sum = sum + term;
		i= i + 2;
		num = -num * x * x;
		den = den * i * (i -1);
	}
	while (fabs(term)>0.000001);
	printf("Taylor series computed. value = sin(%3f)=%3f\n",deg, sum);
	printf(" value using built in function sin(%3f)=%3f\n",deg, sin(x));
	return 0;

}
