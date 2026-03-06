/* 
Chapter 2 Exercise 18
Programmer: Christopher O'Keefe
Date: 03/04/2026
Program objective: After surveying 16,500 customers from a soft drink company, display the approximate amount of energy drink buyers from the surveyed customers (15%)
as well as the approximate amount of customers who prefer citrus flavored energy drinks (58% of energy drink buyers).
*/

#include <iostream>
using namespace std;
int main()
{
    //Declare Variables
    const double SurveyedCustomers = 16500; // Total amount of customers surveyed by company
    const double EnergyDrinkBuyers = SurveyedCustomers * 0.15; // Amount of customers that buy at least one energy drink a day
    const double CitrusLovers = EnergyDrinkBuyers * 0.58; // Amount of energy drink buyers that prefer a citrus flavor

    //Output the result 
    cout << " A soft drink company surveyed 16,500 customers, 15 percent of them or " << EnergyDrinkBuyers << " buy at least one energy drink a day."
    << " Of those energy drink buyers, 58 percent or " << CitrusLovers << " prefer citrus flavored energy drinks. " << endl;
    
    return 0;
    
}