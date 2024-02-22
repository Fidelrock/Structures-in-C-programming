// Tabular format structure
#include<stdio.h>
#include<conio.h>

struct studentResult
{
	int no;
	char name[20];
	int sub[3];
	int total;
}stu[3];

void main()
{
	int i,j,k,l;
	for(i=0;i<3;i++)
	{
			stu[i].total=0;
		printf("\n\n\t\tEnter the data for Student %d\n",i+1);
		printf("\n\tEnter no>>");
		scanf("%d",&stu[i].no);
		printf("\n\tEnter Name >>");
		scanf("%s",&stu[i].name);
		printf("\n\t\t\tEnter Subject marks");
		for(j=0;j<3;j++)
		{
			printf("\n\tSubject [%d]",j+1);
			scanf("%d",&stu[i].sub[j]);
			stu[i].total=stu[i].total+stu[i].sub[j];
		}
	/*	for(k=0;k<3;k++)
		{
		
		}
		for(l=0;l<3;l++)
		{
			stu[k].total=stu[k].total+ stu[k].sub[i];
		}*/
		
	
	}
	system("cls");
		printf("\n\n\n\t\t\tSTUDENT TABULAR FORMAT");
		printf("\n\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
		printf("\nNo \t\t Name\t\t\t Total");
		for(i=0;i<3;i++)
		{
			printf("\n\n\n%d\t\t%s\t\t\t%d",stu[i].no,stu[i].name,stu[i].total);
		}
		
		
	getch();
}