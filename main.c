#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>
#include "splash.h"
#include "login.h"
#include "rectangle.h"
#include "triangle.h"
#include "circle.h"
#include "cone.h"
#include "cube.h"
#include "cuboid.h"
#include "sphere.h"
#include "cylinder.h"

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

int main11(){     // MAIN FUNCTION	
	int i=0;
	time_t t;
	time(&t);
	
	char choice;

	system("cls");   // FOR CLEARING SCREEN
	setcolor(15);
	splash();
    system("cls");
    
    //login();
    system("cls");
	while (1)      // INFINITE LOOP
	{
		system("cls");
		setcolor(10);
		for(i=0;i<80;i++)
			printf("-");
		printf("\n");
		printf("   ******************************  |MAIN MENU|  ***************************** \n");
		
		getche();
		break;
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
	char choice;
	do
	{
		system("cls");
		int b,h;
		char opt;
	    centerText("======= TRIANGLE =======", 5);
		printText("Enter Base: ", 8,50);
	    scanf("%d", &b);
	    printText("Enter Height: ", 9,50);
	    scanf("%d", &h);
	    printText("Press A-Area,P-Perimeter : ", 10,50);
	    getchar();
	    scanf("%c", &opt);
	    switch (opt) {
	            case 'A': case 'a': 
						gotoxy(50,11); 
						printf("Area : %.2f",area_triangle(b,h));
						break;
	            case 'P': case 'p':
	            		gotoxy(50,11); 
						//printf("Perimeter : %d",perimeter_rectangle(l,b));
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
	char choice;
	do
	{
		system("cls");
		int r;
		char opt;
	    centerText("======= CIRCLE =======", 5);
		printText("Enter Radius: ", 8,50);
	    scanf("%d", &r);
	    
	    printText("Press A-Area,C-Circumference : ", 9,50);
	    getchar();
	    scanf("%c", &opt);
	    switch (opt) {
	            case 'A': case 'a': 
						gotoxy(50,10); 
						printf("Area : %.2f",area_circle(r));
						break;
	            case 'C': case 'c':
	            		gotoxy(50,10); 
						printf("Circumference : %.2f",circumference_circle(r));
						break;
	            default :  
	            		gotoxy(50,10); 
						printf("Invalid Option!");
						break;
	        }
	    printText("Do you want to Continue(y/n)? : ", 11,50);
	    getchar();
	    scanf("%c", &choice);
	}
	while(choice == 'y');
}
void manageCone(){
	char choice;
	do
	{
		system("cls");
		int h,r;
		char opt;
	    centerText("======= CONE =======", 5);
		printText("Enter Height: ", 8,50);
	    scanf("%d", &h);
	    printText("Enter Radius: ", 9,50);
	    scanf("%d", &r);
	    printText("Press A-Area,V-Volume : ", 10,50);
	    getchar();
	    scanf("%c", &opt);
	    switch (opt) {
	            case 'A': case 'a': 
						gotoxy(50,11); 
						printf("Area : %.2f",area_cone(h,r));
						break;
	            case 'V': case 'v':
	            		gotoxy(50,11); 
						printf("Volume : %.2f",volume_cone(h,r));
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
void manageCube(){
	char choice;
	do
	{
		system("cls");
		int side;
		char opt;
	    centerText("======= CUBE =======", 5);
		printText("Enter Side: ", 8,50);
	    scanf("%d", &side);
	    
	    printText("Press A-Area,V-Volume,L-Lateral Area : ", 9,50);
	    getchar();
	    scanf("%c", &opt);
	    switch (opt) {
	            case 'A': case 'a': 
						gotoxy(50,10); 
						printf("Area : %.2f",area_cube(side));
						break;
	            case 'V': case 'v':
	            		gotoxy(50,10); 
						printf("Volume : %.2f",volume_cube(side));
						break;
				case 'L': case 'l':
	            		gotoxy(50,10); 
						printf("Lateral Area : %.2f",lateralarea_cube(side));
						break;
	            default :  
	            		gotoxy(50,10); 
						printf("Invalid Option!");
						break;
	        }
	    printText("Do you want to Continue(y/n)? : ", 11,50);
	    getchar();
	    scanf("%c", &choice);
	}
	while(choice == 'y');
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
	char choice;
	do
	{
		system("cls");
		int r,h;
		char opt;
	    centerText("======= CYLINDER =======", 5);
		printText("Enter Radius: ", 8,50);
	    scanf("%d", &r);
	    printText("Enter Height: ", 9,50);
	    scanf("%d", &h);
	    printText("Press A-Area,V-Volume : ", 10,50);
	    getchar();
	    scanf("%c", &opt);
	    switch (opt) {
	            case 'A': case 'a': 
						gotoxy(50,11); 
						printf("Area : %.2f",area_cylinder(r,h));
						break;
	            case 'V': case 'v':
	            		gotoxy(50,11); 
						printf("Volume : %.2f",volume_cylinder(r,h));
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
void manageSphere(){
	char choice;
	do
	{
		system("cls");
		int r;
		char opt;
	    centerText("======= SPHERE =======", 5);
		printText("Enter Radius: ", 8,50);
	    scanf("%d", &r);
	    
	    printText("Press A-Area,V-VolumeC-Circumference : ", 9,50);
	    getchar();
	    scanf("%c", &opt);
	    switch (opt) {
	            case 'A': case 'a': 
						gotoxy(50,10); 
						printf("Area : %.2f",area_sphere(r));
						break;
	            case 'V': case 'v':
	            		gotoxy(50,10); 
						printf("Volume : %.2f",volume_sphere(r));
						break;
				case 'C': case 'c':
	            		gotoxy(50,10); 
						printf("Circumference : %.2f",circumference_sphere(r));
						break;
	            default :  
	            		gotoxy(50,10); 
						printf("Invalid Option!");
						break;
	        }
	    printText("Do you want to Continue(y/n)? : ", 11,50);
	    getchar();
	    scanf("%c", &choice);
	}
	while(choice == 'y');
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
