#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>
#include "splash.h"
#include "login.h"
#include "rectangle.h"
#include "cuboid.h"

void setcolor(int ForgC)
{ 
	WORD wColor;
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	
	if(GetConsoleScreenBufferInfo(hStdOut,&csbi))
	{
		wColor=(csbi.wAttributes & 0xB0)+(ForgC & 0x0B);
	//	SetConsoleTextAttributes(hStdOut,wColor);
		SetConsoleTextAttribute(hStdOut,wColor);
	}
}

// Function to set console to full screen
void setFullScreen() {
    system("mode con: cols=120 lines=30"); // Approx. full screen
}

// Function to set color: 1F = Blue background, Bright white text
void setColor() {
    system("color 1F");
}

// Function to move cursor to X, Y position
void gotoxy(int x, int y) {
    COORD coord = {x, y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

// Function to center and print a string on given row
void centerText(const char* text, int row) {
    int len = strlen(text);
    int col = (120 - len) / 2;
    gotoxy(col, row);
    printf("%s", text);
}
// Function to center and print a string on given row
void printText(const char* text, int row,int col) {
    gotoxy(col, row);
    printf("%s", text);
}

void pauseScreen() {
    centerText("Press any key to continue...", 22);
    getch();
}

void exitApp() {
    system("cls");
    centerText("Exiting the application. Thank you!", 10);
    Sleep(2000);
    exit(0);
}

void manageTriangle(){
	
	
}
void manageRectangle(){
	char choice;
	do
	{
		system("cls");
		int l,b;
		char opt;
	    centerText("======= RECTANGLE =======", 5);
		printText("Enter Length: ", 8,50);
	    scanf("%d", &l);
	    printText("Enter Beadth: ", 9,50);
	    scanf("%d", &b);
	    printText("Press A-Area,P-Perimeter : ", 10,50);
	    getchar();
	    scanf("%c", &opt);
	    switch (opt) {
	            case 'A': case 'a': 
						gotoxy(50,11); 
						printf("Area : %d",area_rectangle(l,b));
						break;
	            case 'P': case 'p':
	            		gotoxy(50,11); 
						printf("Perimeter : %d",perimeter_rectangle(l,b));
						break;
	            default :  
	            		gotoxy(50,11); 
						printf("Invalid Option!");
						break;
	        }
	    printText("Do you want to Continue(y/n)? : ", 12,50);
	    getchar();
	    scanf("%c", &choice);
	}
	while(choice == 'y');
}
void manageCircle(){
	
}
void manageCone(){
	
}
void manageCube(){
	
}
void manageCuboid(){
	char choice;
	do
	{
		system("cls");
		int l,b,h;
		char opt;
	    centerText("======= CUBOID =======", 5);
		printText("Enter Length: ", 8,50);
	    scanf("%d", &l);
	    printText("Enter Breadth: ", 9,50);
	    scanf("%d", &b);
	    printText("Enter Height: ", 10,50);
	    scanf("%d", &h);
	    
	    printText("Press A-Surface Area,V-Volume,S-Space Diagonal : ", 11,50);
	    getchar();
	    scanf("%c", &opt);
	    switch (opt) {
	            case 'A': case 'a': 
						gotoxy(50,12); 
						printf("Surface Area : %.2f",surfaceArea_cuboid(l,b,h));
						break;
	            case 'V': case 'v':
	            		gotoxy(50,12); 
						printf("Volume : %.2f",volume_cuboid(l,b,h));
						break;
				case 'S': case 's':
	            		gotoxy(50,12); 
						printf("Space Diagonal : %.2f",spaceDiagonal_cuboid(l,b,h));
						break;
	            default :  
	            		gotoxy(50,12); 
						printf("Invalid Option!");
						break;
	        }
	    printText("Do you want to Continue(y/n)? : ", 13,50);
	    getchar();
	    scanf("%c", &choice);
	}
	while(choice == 'y');
	
}
void manageCylinder(){
	
	
}
void manageSphere(){
	
}

void mainmenu() {
    int choice;
    while (1) {
        system("cls");
        centerText("==== MAIN-MENU ====", 5);
        printText("1. Triangle", 8,50);
        printText("2. Rectangle", 9,50);
        printText("3. Circle", 10,50);
        printText("4. Cone", 11,50);
        printText("5. Cube", 12,50);
        printText("6. Cuboid", 13,50);
        printText("7. Cylinder", 14,50);
        printText("8. Sphere", 15,50);
        printText("9. Exit", 16,50);       
        printText("Enter your choice: ", 18,50);
        gotoxy(70, 18);
        scanf("%d", &choice);
        switch (choice) {
            case 1:  manageTriangle();break;
            case 2:  manageRectangle();break;
            case 3:  manageCircle();break;
            case 4:  manageCone();break;
            case 5:  manageCube();break;
            case 6:  manageCuboid();break;
            case 7:  manageCylinder();break;
            case 8:  manageSphere();break;
            case 9:  exitApp(); break;
            default:
                centerText("Invalid choice! Try again.", 19);
                Sleep(1000);
        }
    }
}

int main() {
    setFullScreen();
    setColor();
    mainmenu();
    return 0;
}
