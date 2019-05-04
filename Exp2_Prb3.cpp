// The value of V depends on the values of x and y as follows:
// V = xyz               when x = 1 and 1<y<5
// V = x + y/z           when x= 1 and y>=5
// V = |(x - y)/z|       when x = 2 and y<=5
// V = x -(sqrt y + z)  when x = 2 and y>5
// V = x + y + z         for other values of x and y
// Write a C++ program that accepts two integers x and y from the kbd. 
// Let z = 2.5. Use a constant declaration for z and output V with 10 field width and two decimal places.
// Use switch statement for selection of x values.

#include <iostream>
#include <conio.h>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
	int x, y;
	float v;
	const float z = 2.5;
	
	cout << setprecision(2) << fixed << showpoint;
	
	cout << "Enter the values of the following:\n\n";
	cout << "If\n";
	cout << "x =  "; cin >> x; 
	cout <<"and,\n";
	cout << "y =  "; cin >> y;
	
	switch (x)
	{
		case 1:
			{
				if (1 < y < 5)
				v = (x * y * z);
				else if (y >= 5)
				v = (x + y/z);
				break;
			}
		
		case 2:
			{
				if (y <= 5)
				v = (fabs((x - y)/z));
				else if (y > 5)
				v = (x - (sqrt(y + z)));
				break;
			}
			
		
		default:
			{
				v = (x + y + z);
				break;
			}	
	}
	
	cout << setw (10) << "\n\nThen, \n";
	cout << "V = " << v;
	cout << endl; 

	getch();
	return 0;	
}
