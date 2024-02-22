// N Number of students data usng structure
#include<stdio.h>
#include <conio.h>

struct student
{
	 int rollno;
	char SubTopicDescription[20];
};

void main()
{
	struct student s[100];
	int n,i,j;
	printf("How many number of students do you want to use \n");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("Student#%d rollno and SubTopicDescription\n",i);
		scanf("%d %s",&s[i].rollno,&s[i].SubTopicDescription);
	}
	system("cls");
	printf("You have entered\n");
	for(j=0;j<n;j++)
	{
		printf("%d\t%s\n",s[j].rollno,s[j].SubTopicDescription);
	}
	
	getch();
	
}