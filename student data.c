//print student data using structure
#include<stdio.h>
#include <conio.h>

struct student
{
	 int rollno;
	char SubTopicDescription[20];
};
void main()
{
	 struct student s1,s2;
	printf("Enter the rollno and the SubTopicDescription of the first student\n");
	scanf("%d%s",&s1.rollno,&s1.SubTopicDescription);
	
	printf("Enter the rollno and the SubTopicDescription of the second student\n");
	scanf("%d%s",&s2.rollno,&s2.SubTopicDescription);
	system("cls");
	printf("\ns1.rollno=%d\ns1.SubTopicDescription=%s\n",s1.rollno,s1.SubTopicDescription);
	
	printf("\ns2.rollno=%d\ns2.SubTopicDescription=%s\n",s2.rollno,s2.SubTopicDescription);
	
	getch();
}

