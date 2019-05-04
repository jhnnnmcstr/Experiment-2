// Write a program that computes a customer’s water bill. 
// The bill includes a P35 water demand charge plus a consumption(use) charge of P1.10 for every gallon used.
// Consumption is figured from meter readings in gallons taken recently and during the previous month. 
// If the customer’s unpaid balance is greater than 0, a P20 late charge is assessed as well.

#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{	
	cout << "\t\tCustomer's Water Bill\n\n";
	cout << "Watter Bill:\t\tP 35\n";
	cout << "Consumpion Charge:\tP 1.10 / gallon\n";
	cout << "Charge (if late):\tP20\n\n";
	
	float cnsmptn, balance, amount;
	
	cout << "Amount of Water Consumption (in gallons): \n"; cin >> cnsmptn;
	cout << "Amount of Unpaid Balance: \n"; cin >> balance;
	
	{
		if (balance > 0)
		{
			amount = 35 + ((cnsmptn * 1.10) + (balance * 20));	
		}
		else
		{
			amount = 35 + (cnsmptn * 1.10);
		}
	}
	
	cout << "Amount to Pay: Php " << amount;
	
	getch();
	return 0;
}
