#include <iostream>
using namespace std;
int main()
{
	int pay, tax;
	cout << "Enter your Salary (in dollars) :" << endl;
	cin >> pay;
	if (pay < 10276)
		{tax = pay/10;
		cout << "Your income is :		" << pay << "$" << "\nThe amount of tax is :		" << tax << "$" << "\nThe income after tax is :" << pay-tax << "$";}
	else if (pay >= 10276 && pay < 41776)
		{tax = 1027 + 0.12 * (pay - 10275);
		cout << "Your income is :		" << pay << "$" << "\nThe amount of tax is :		" << tax << "$" << "\nThe income after tax is :	" << pay-tax << "$";}
	else if (pay >= 41776 && pay < 89076)
		{tax = 4808 + 0.22 * (pay - 41775);
		cout << "Your income is :		" << pay << "$" << "\nThe amount of tax is :		" << tax << "$" << "\nThe income after tax is :	" << pay-tax << "$";}
	else if (pay >= 89076 && pay < 170051)
		{tax = 15214 + 0.24 * (pay - 89075);
		cout << "Your income is :		" << pay << "$" << "\nThe amount of tax is :		" << tax << "$" << "\nThe income after tax is :	" << pay-tax << "$";}
	else if (pay >= 170051 && pay < 215951)
		{tax = 34648 + 0.32 * (pay - 170050);
		cout << "Your income is :		" << pay << "$" << "\nThe amount of tax is :		" << tax << "$" << "\nThe income after tax is :	" << pay-tax << "$";}
	else if (pay >= 215951 && pay < 539901)
		{tax = 49336 + 0.35 * (pay - 215950);
		cout << "Your income is :		" << pay << "$" << "\nThe amount of tax is :		" << tax << "$" << "\nThe income after tax is :	" << pay-tax << "$";}
	else if (pay >= 539901)
		{tax = 162719 + 0.37 * (pay - 539900);
		cout << "Your income is :		" << pay << "$" << "\nThe amount of tax is :		" << tax << "$" << "\nThe income after tax is :	" << pay-tax << "$";}
}
