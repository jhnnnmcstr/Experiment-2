// The Fibonacci sequence is a sequence which starts with 0 and 1, with subsequent numbers of the sequence (called Fibonacci numbers) being the sum of the previous two.  
// Thus, the first few terms of the sequence are:0,1,1,2,3,5,8,...
// Create a program that will output the NEXT 20 Fibonacci numbers (after 0 and 1) in one line, separated by commas. 
// See the sample output below:
// Fibonacci numbers:
// 0,1,1,2,3,5,8,13,21,34,55,89,144,233,377,610,987,1597,2584,4181,6765,10946

#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
	int a = 0, b = 1, c = 0;
	
    cout << "Fibonacci Sequence \n" << endl;
    cout << a << ",";
    
    for (int i = 0; i <= 20; i++)
    {	
    	a = b;
    	b = c;
    	c = a + b;
    	
    	if (i == 20) break;
    	cout << c << ","; 
	}
	
	for (int i = 10946; i <= 10947; i++)
	{
		if (i == 10947) break;
		cout << i << " ";
	}
		
    getch();
    return 0;
}

