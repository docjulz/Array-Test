// This program uses the & operator to determine a
// variables address.

#include <iostream>
using namespace std;

int main()
{
	const int SIZE = 5;
	int numbers[SIZE];

	// Get values to store in the arra
	// Use the pointer notation instead of subscripts
	cout << "Enter " << SIZE << " numbers: ";
	for (int count = 0; count < SIZE; count++)
		cin >> *(numbers + count);

	// Display the values in the array 
	// Use pointer notation instead of subscripts
	cout << "Here are the numbers you entered.\n";
	for (int count = 0; count < SIZE; count++)
		cout << *(numbers + count) << " ";
	cout << endl;
	return 0;
}