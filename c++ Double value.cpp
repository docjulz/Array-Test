// This program uses 2 functions that accept 
// the addresses of variables as arguments

#include <iostream>
using namespace std;

// prototypes
void getNumber(int*);
void doubleValue(int*);

int main()
{
	int number;

	getNumber(&number);
	doubleValue(&number);

	cout << "That value doubled is " << number << endl;

	return 0;

}

void getNumber(int* input)
{
	cout << "Enter number: ";
	cin >> *input;
}

void doubleValue(int* val)
{
	*val *= 2;
}