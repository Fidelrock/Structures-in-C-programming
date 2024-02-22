//Global structure example
#include<stdio.h>
#include <conio.h>
struct distance
{
int feet;
float inches;	
};
struct distance d1;//Global variable
void main()
{
	struct distance d2; //local variable
	//clrscr();
	
	d1.feet=23;
	d1.inches=7.5;
	
	d2.feet=14;
	d2.inches=2.5;
	
	printf("d1.feet=%d\nd1.inches=%.2f\n\n",d1.feet,d1.inches);
	printf("d2.feet=%d\nd2.inches=%.2f",d2.feet,d2.inches);
	
	
	getch();
}
