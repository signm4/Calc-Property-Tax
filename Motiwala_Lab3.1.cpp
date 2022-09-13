// Name: Muhammed Motiwala
// Assignment: Lab 3
// calculating Annual Property Tax

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double propertyValue, assessedValue, propertyTax;
	double taxRate;
	
	cout << "Enter the actual property value: $";
	cin >> propertyValue;
	cout << "Enter the amount of tax per $100 of assessed value: $";
	cin >> taxRate;
	
	
	assessedValue = propertyValue * .6;
	
	propertyTax = (assessedValue/100) * taxRate;
	
	cout << fixed << showpoint;
	cout << setprecision(2);
	
	cout << "Property Value: " << setw(10) << "$" << propertyValue << "\n";
	cout << "Assessed Value: " << setw(10) << "$" << assessedValue << "\n";
	cout << "Property Tax: " << setw(12) << "$" << propertyTax << "\n";
}
