//A structure to display the name ,rollno and marks of a student
#include<stdio.h>
#include<string.h>
#include <conio.h>
struct student
{
	char name[200];
	int rollno;
	float marks;
};
int main(int argc, char** argv)
{
	struct student student1;
	strcpy(student1.name,"FIDEL");
	student1.rollno= 201;
	student1.marks=89.5;
	printf("name::%s",student1.name);
	printf("\nrollno::%d",student1.rollno);
	printf("\nmarks::%.2f",student1.marks);
	getch();
	
}