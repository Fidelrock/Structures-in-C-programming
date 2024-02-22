//Nested structure
#include<stdio.h>
#include <conio.h>

struct name
{
	char name[20];
};

struct game
{
	char hobby[20];
	struct name f;
	
};

void main()
{
	struct game g;
	printf("Enter your name and Hobby\n");
	scanf("%s%s",&g.f.name,&g.hobby);
	
	printf("\nName>>%s\nHobby>>%s",g.f.name,g.hobby);
	getch();
}

																																																																																																																																																								#include<stdio.h>
																																																																																																																																																								                                                                                                             