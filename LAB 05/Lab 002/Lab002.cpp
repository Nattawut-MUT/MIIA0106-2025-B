#include <iostream>
#include <string> 
using namespace std;

int maxOfThree(int a, int b, int c)
{
	if (a >= b && a >= c)
		return a;
	else if (b >= a && b >= c)
		return b;
	else
		return c;
}

int main()
{
	int a, b, c;
	int mavxalue = -1000000;

	cout << "Enter a integers: ";
	cin >> a;
	cout << "enter b integer: ";
	cin >> b;
	cout << "enter c integer: ";
	cin >> c;

	mavxalue = maxfThree(a, b, c);
	cout << "the maximum value is: " << mavxalue << endl;

	return 1;
}