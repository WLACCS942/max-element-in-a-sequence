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

int verifyEntry(int entry)//on outside, let a return of 0 mean a quit. This is only verifying the number of total elements
{
	if(entry == 0)
	{
		return 0;
	}
	if(entry < 0)
	{
		cout << "Entry invalid, please enter a non-zero, non-negative value (enter 0 to exit): " ;
		cin >> entry;
		while(entry < 0)
		{
			cout << "Entry invalid, please enter a non-zero, non-negative value (enter 0 to exit): ";
			cin >> entry;
			if(entry == 0)
			{
				break;
			}
		}
		return entry;
	}
}
int main()
{
	int max,next,min,n = numeric_limits<int>::min();
	int counter = 1;
	int entry;
	
	cout << "This program will find the maximum value of any integer sequence." << endl;
	cout <<	"Please enter the total number of elements." << endl;
	cout << "(enter 0 to exit) n = ";
	cin >> entry;
	n = verifyEntry(entry);
	if(n == 0)
	{
		exit(0);
	}
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
	exit(0);
}
	

	
