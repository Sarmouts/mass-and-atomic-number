#include <iostream>
using namespace std;
int main()
{
	string V, W;
	int a, b, x, y;
	cout << "x^Vy  a^Wb" << endl;
	cout << "Enter x mass number of element V: ";
	cin >> x;
	cout << "Enter element V: ";
	cin >> V;
	cout << "Enter y atomic number of element V: ";
	cin >> y;
	cout << "Enter a mass number of element W: ";
	cin >> a;
	cout << "Enter element W: ";
	cin >> W;
	cout << "Enter b atomic number of element W: ";
	cin >> b;
	if (a <= 0 || b <= 0 || x <= 0 || y <= 0)
	{
		cout << "Please enter a valid value" << endl;
	}
	else if (y == b && W != V || y != b && W == V)
	{
		cout << "Same elements must have the same atomic number and different elements must have different atomic mumber" << endl;
	}
	else if (x < 2 * y || a < 2 * b)
	{
		cout << "Mass number must be greater or equal to the double of atomic number" << endl;
	}
	else if (W == V)//isotope
	{
		if (x != a)
		{
			cout << "        Isotopes       " << endl;
			cout << y << "p+ = " << b << "p+" << endl;
			cout << y << "e- = " << b << "e-" << endl;
			cout << x - y << "n != " << a - b << "n" << endl;
			cout << "Same chemical element, same chemical properties" << endl;
			cout << "Different mass" << endl;
		}
		else
		{
			cout << y << "p+ = " << b << "p+" << endl;
			cout << y << "e- = " << b << "e-" << endl;
			cout << x - y << "n = " << a - b << "n" << endl;
			cout << "Same chemical element, same chemical properties" << endl;
			cout << "Same mass" << endl;
		}
	}
	else if (x == a)//isobar
	{
		cout << "        Isobars        " << endl;
		cout << y << "p+ != " << b << "p+" << endl;
		cout << y << "e- != " << b << "e-" << endl;
		cout << x - y << "n != " << a - b << "n" << endl;
		cout << "Different chemical element, different chemical properties" << endl;
		cout << "Same mass" << endl;
	}
	else
	{
		if (x - y == a - b)
		{
			cout << y << "p+ != " << b << "p+" << endl;
			cout << y << "e- != " << b << "e-" << endl;
			cout << x - y << "n = " << a - b << "n" << endl;
			cout << "Different chemical element, different chemical properties" << endl;
			cout << "Different mass" << endl;
		}
		else
		{
			cout << y << "p+ != " << b << "p+" << endl;
			cout << y << "e- != " << b << "e-" << endl;
			cout << x - y << "n != " << a - b << "n" << endl;
			cout << "Different chemical element, different chemical properties" << endl;
			cout << "Different mass" << endl;
		}
	}
}

