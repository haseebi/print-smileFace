/* C Program - Print Smiling Face on Screen */
		
#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int sml=1, i, limit;
	printf("How many smiley face you want to print ? ");
	scanf("%d",&limit);
	printf("So");
	for(i=0; i<limit; i++)
	{
		printf("%c ",sml);
	}
	printf("are the ");
	printf("%d",&limit);
	printf(" smiley face.");
	printf("➡️👍👍⬅️");
	 int r, c;  
  
    for(r = 0; r <= 43; r++)  
    {  
        for(c = 0; c <= 79; c++)  
        {  
           printf("%c", 1);  
        }  
    }  
	getch();
}
