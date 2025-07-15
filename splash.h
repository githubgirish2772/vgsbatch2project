#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>

void splash()
{
	int i=0;
	time_t t;
	time(&t);
	//SPLASH SCREEN
	printf("---------------------------------------------------------------------------------\n");
	printf("splash Screen come here \n");
	for(i=0;i<80;i++)
		printf("-");
	printf("\nCurrent date and time : %s",ctime(&t));
	for(i=0;i<80;i++)
		printf("-");
		
	printf("\n\nPress any key to continue:");
	getch();
	//This is updated file
}
