#include <stdio.h>
struct student
{
	int rollno;
	char name[20];
	float m1,m2,m3;
};

int main()
{
	int n;
	printf("Enter the number of students\n");
	scanf("%d",&n);
	struct student s1[n];
	
	printf("Enter the details");
	for(int i=0;i<n;i++)
	{
	
	printf("Enter rollno");
	scanf("%d",&s1[i].rollno);
	printf("Enter name");
	scanf("%s",s1[i].name);
	printf("Enter marks");
	scanf("%f%f%f",&s1[i].m1,&s1[i].m2,&s1[i].m3);
	}

return 0;
}
