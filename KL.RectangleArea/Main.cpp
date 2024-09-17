
//Assignment 2 - Rectangle Area
#include <iostream>
#include <conio.h>

using namespace std;

//Function prototypes
double GetLengthFromUser();
double GetWidthFromUser();
double CalculateArea(double length, double width);
void DisplayArea(double area);

int main()
{
	double length = GetLengthFromUser();
	double width = GetWidthFromUser(); 
	double area;
	
	//Calculate the area
	area = CalculateArea(length,width);
	
	//Display the total area
	DisplayArea(area);

	(void)_getch();
	return 0;
}


//User to enter the length 
double GetLengthFromUser()
{
	double length = 0;
	cout << "Enter the length of the rectangle: ";
	cin >> length;
	return length; 
}

//User to enter the width
double GetWidthFromUser()
{
	double width = 0;
	cout << "Enter the width of the rectangle: ";
	cin >> width;
	return width; 
}

//Calculate the length and width together
double CalculateArea(double length, double width)
{
	return length * width;
}

// Display the total area
void DisplayArea(double area)
{
	cout << "The area of the rectangle is: " << area << endl;
}
