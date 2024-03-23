#include <iostream>
using namespace std;
int main()
{
	int dividend, divisor, quotient;
start:
	cout << "Dividend : ";
	cin >> dividend;
	cout << "Divisor : ";
	cin >> divisor;
	try
	{
		if (divisor == 0)
		{
			throw(divisor);
		}
		else
			quotient = dividend / divisor;
	}
	catch (...)
	{
		cout << "\nCan't divided by " << divisor << endl
			 << endl;
		goto start;
	}
	cout << "Quotient : " << quotient;
	return 0;
}
