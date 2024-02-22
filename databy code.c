//show the data of item by the code
#include<stdio.h>
#include <conio.h>
struct item
{
	int code;
	char SubTopicDescription[20];
	int qnty;
};

int main(int argc, char** argv)
{
	struct item it[10];
	int i,n,icode,flag=0;
	printf("How many items ?\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Item#%d\n",i+1);
		printf("Code,Name,Quantity\n");
		scanf("%d%s%d",&it[i].code,&it[i].SubTopicDescription,&it[i].qnty);
		system("cls");
	}
	printf("Enter the code for the item you want to view\n");
	scanf("%d",&icode);
	for(i=0;i<n;i++) 
	{
		if(it[i].code==icode)
		{
			flag==1;
			printf("Name:%s\tQuantity:%d",it[i].SubTopicDescription,it[i].qnty);
		break;
		}
		
	}
	fflush(stdin);
	if(flag==0)
	{
		printf("\nInvalid Code");
	}
	 
	getch();
}