#include <stdio.h>
struct student
{
	int rollno;
	char name[20];
	float m1,m2,m3;
	float avg;
};

int main()
{
	int n;
	printf("Enter the number of students\n");
	scanf("%d",&n);
	struct student s1[n];
	
	printf("Enter the details :\n");
	for(int i=0;i<n;i++)
	{
	
	printf("Enter rollno :\t");
	scanf("%d",&s1[i].rollno);
	printf("Enter name :\t");
	scanf(" %s",s1[i].name);
	printf("Enter marks :\t");
	scanf("%f%f%f",&s1[i].m1,&s1[i].m2,&s1[i].m3);
	s1[i].avg = (s1[i].m1+s1[i].m2+s1[i].m3)/3.0;
	}
	printf("Students who scored above average is :\n");
	printf("NAME\t ROLL_NUMBER\t AVERAGE\n");
	for(int i=0; i<n; i++)
	{
	if (s1[i].avg>35)
		{
			printf("%s\t\t%d\t\t%f\n",s1[i].name,s1[i].rollno,s1[i].avg);
		}
	else 
	{
		printf("Students who scored below average is :\n");
		printf("%s\t\t%d\t\t%f\n",s1[i].name,s1[i].rollno,s1[i].avg);
	}
	}
return 0;
}
