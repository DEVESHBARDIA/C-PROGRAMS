#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int s[20];
int top=-1,i;
char postfix[20],symbol;
int op1,op2,r;
int main()
{
	printf("Enter the expression: ");
	scanf("%s",postfix);
	for (i=0;i<strlen(postfix);i++)
	{
		symbol=postfix[i];
		if(isdigit(symbol))
		{
			s[++top]=symbol-'0';
		}
		else
		{
			op1=s[top--];
			op2=s[top--];
			switch(symbol)
			{
				case '+' :	r=op2+op1;
							break;
				case '-' :	r=op2-op1;
							break;
				case '*' :	r=op2*op1;
							break;
				case '/' :	if (op1 == 0)
								printf("Division by zero error!");
							else
								r=op2/op1;
							break;
				case '%' :	r=op2%op1;
							break;
				case '^' :	r= pow(op2,op1);
							break;
				default : printf("Error!");
			}
			s[++top] = r;
		}
	}
	printf("Result = %d\n",s[top--]);
	return 0;
}
