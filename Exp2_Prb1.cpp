// An Internet service provider has 3 different subscription packages for its customers:
// Package A: For P995/mo 10 hrs of access are provided. Additional hours are P20/hr.
// Package B: For P1495/mo 20 hrs of access are provided. Additional hours are P10/hr.
// Package C: For P1995/mo of unlimited access is provided.
// Write a program that calculates a customer’s monthly bill. 
// It should ask which package the customer has purchased and how many hours were used. 
// It should then display the total amount due.

#include <iostream>
#include <conio.h>
#include <string>
#include <iomanip>

using namespace std;

int main() 
{
	string pckg;
	float hrs;
	float bill;
	
	cout << "\t\tAvailable Packages: \n\n";
	cout << "Package A: For P995/mo 10 hrs of access are provided.\n";
	cout << "\tAdditional hours are P20/hr.\n\n";
	cout << "Package B: For P1495/mo 20 hrs of access are provided.\n";
	cout << "\tAdditional hours are P10/hr.\n\n";
	cout << "Package C: For P1995/mo of unlimited access is provided.\n\n\n";
	
 	cout << "Enter Package: "; cin >> pckg;

	if ((pckg == "A") || (pckg == "B") || (pckg == "C") || (pckg == "a") || (pckg == "b") || (pckg == "c"))
	{
		cout << "Hours used: "; cin >> hrs;
		
		if ((pckg == "A") || (pckg == "a"))
			{ 
				if (hrs > 10)
				{ 
					bill = 995 + (hrs - 10) * 20;
				}
				
				else
				{ 
					bill = 995; 
				} 
			} 
		
		else if ((pckg == "B") || (pckg == "b")) 
			{
				if (hrs > 20)
				{
					bill = 1495 + (hrs - 20) * 10; 
				}
				
				else
				{
				bill = 1495;
				}
			}
			
		else if ((pckg == "C") || (pckg == "c"))
		{ 
			bill = 1995;
		}
			
	}
	
	else
	{ 
		cout << "\nInvalid! \n"; 
	}
	
	cout << "Bill = Php " << bill;
		
	getch();
	return 0;
}

