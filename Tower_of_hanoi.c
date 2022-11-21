#include<stdio.h>
void Tower(int n,char BEG, char AUX,char END)
{
	if(n==1)
	{
		printf("%c --> %c\n",BEG,END);
		return ;
	}
	Tower(n-1,BEG,END,AUX);
	printf("%c --> %c\n",BEG,END);
	Tower(n-1,AUX,BEG,END);
}
int main()
{
	int n;
	printf("Enter the number of Discs: ");
	scanf("%d",&n);
	Tower(n,'A','B','C');
}
