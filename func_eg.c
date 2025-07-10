#include <stdio.h>
#include "rectangle.h"
int main()
{
	int x;
	int y;
	int res;
	char ch;
	printf("Enter Length :");
	scanf("%d",&x);
	
	printf("Enter Breadth :");
	scanf("%d",&y);
	getchar();
	printf("Enter choice(A=AREA,P=PERIMETER) :");
	scanf("%c",&ch);
	
	switch(ch)
	{
		case 'A': case 'a':
			{
				int res;
				res = area_rectangle(x,y);
				printf("Area = %d",res);
				break;
			}
			
		case 'P': case 'p':
			{
				int res;
				res = perimeter_rectangle(x,y);
				printf("PErimeter = %d",res);
				break;
			}
			
		default:
			printf("Invalid input");
			break;
	}
}
