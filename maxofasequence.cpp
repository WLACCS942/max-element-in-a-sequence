//Christopher Kuni
//
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <stdio.h>
#include <cmath>
#include <stdlib.h>
#include <limits>

using namespace::std;

int verifyEntry(int entry)//on outside, let a return of 0 mean a quit. pass integer to indicate what value we are checking? (i.e. if we are checking for length, width, etc)
{
	if(entry == 0)
	{
		return 0;
	}

}
int main()
{
	int max,next,min = numeric_limits<int>::min();
	int n = 0;
	int counter = 1;
	int entry;
	
	cout << "This program will find the maximum value of any integer sequence." << endl;
	cout <<	"Please enter the total number of elements." << endl;
	cout << "(enter 0 to exit) n = ";
	cin >> entry;
	n = verifyEntry(entry);
	
	cout << "Now, enter each element of the sequence. If you made a mistake with" << endl;
	cout << "the total number of elements, simply put a number smaller than the " << endl;
	cout << "smallest number in the sequence (i.e. if the minumum is 1, then " << endl;
	cout << "entering -1 for any unused primed elements will be discounted)" << endl;
	
	cin >> entry;
	max = entry;
	min = entry;
	do{
		cin >> next;
		if(max <= next)
		{
			max = next;
		}
		if(min >= next)
		{
			min = next;
		}
		counter++;
	}while(counter <= (n - 1));
	
	cout << "max is " << max << ". Min is " << min << ". Double strike enter to exit this prompt." << endl;
	system("PAUSE");
}
	

	
