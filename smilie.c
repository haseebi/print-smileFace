/* C Program - Print Smiling Face on Screen */
		
#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int sml=1, i, limit;
	printf("How many smiley face you want to print ? ");
	scanf("%d",&limit);
	for(i=0; i<limit; i++)
	{
		printf("%c ",sml);
	}
	getch();
}
