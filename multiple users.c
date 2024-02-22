//Structure info for two students
#include<stdio.h>
#include<string.h>
#include <conio.h>
 
 struct student
 {
 	char name[200];
 	int rollno;
 	float marks;
 	
 };
 int main()
 {
	 struct student s1;
	 struct student s2;
	 strcpy(s1.name,"Fidel");
	 strcpy(s2.name,"James");
	 s1.rollno=1;
	 s1.marks=87.9;
	 s2.rollno=2;
	 s2.marks=67.9;
	 
	 printf("%s\t%d\t%.2f\n",s1.name,s1.rollno,s1.marks);
	 printf("%s\t%d\t%.2f\n",s2.name,s2.rollno,s2.marks);
	 
	 getch();
 }
 