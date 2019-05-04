// Create a program that will “count” numbers, separated by commas, up to 10. 
// When it reaches 10, count by 2s until you reach 30. See the sample output below:
// Counting…
// 1,2,3,4,5,6,7,8,9,10,12,14,16,18,20,22,24,26,28,30

#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
	int i, j;
	
	for (i = 1; i <= 1; i++)
	{
		if (i == 0) continue;
		cout << i << ",";
		
		for (j = 2; j <= 10; j++)
		{
			if (j == 10) break;
			cout << j << ",";
		}
		
		for (j = 10; j <= 30; j+=2)
		{
			if (j == 30) break;
			cout << j << ",";	
		}
		
		for (j = 30; j <= 31; j+=2)
		{
			if (j == 31) break;
			cout << j << " ";
		}
		cout << endl;
	}
	getch();
	return 0;
}
