
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double* sales = nullptr,        
        total = 0.0,
        average;
    int numDays;

    // Get number of days of sales.
    cout << "Number of days of sales: ";
    cin >> numDays;

    sales = new double[numDays];        // allocate memory.

    // Get the sales figures for each day
    cout << "Enter the sales figures below.\n";
    for (int i = 0; i < numDays; i++)
    {
        cout << "Day: " << (i + 1) << ": ";     
        cin >> sales[i];
    }

    // Display values entered using poiners
    cout << setprecision(2) << fixed << noshowpoint;
    cout << "\nYou entered:\n";
    for (int count = 0; count < numDays; count++)
    {
        cout << "$" << * (sales + count) << endl;        //**special format for pointer arrays**
    }
    cout << endl;

    // Calculate the total sales
    for (int count = 0; count < numDays; count++)
    {
        total += sales[count];
    }

    average = total / numDays;

    // Display total sales
    
    cout << "Total sales $" << total << endl;
    cout << "Average $" << average << endl;

    /**********************
    * Free dynamic memory *
    ***********************/
    delete[] sales;
    sales = nullptr;

    return 0;
}
