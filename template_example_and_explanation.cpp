/*#include <iostream>
using namespace std;

template <class T>
T Large(T n1, T n2)
{
    return (n1>n2?n1:n2);
}

// T signifies that the type of class or variable can be any type.

int main ()
{
    int i1, i2;
	float f1, f2;
	char c1, c2;

	cout << "Enter two integers:\n";
	cin >> i1 >> i2;
	cout << Large(i1, i2) <<" is larger." << endl;

	cout << "\nEnter two floating-point numbers:\n";
	cin >> f1 >> f2;
	cout << Large(f1, f2) <<" is larger." << endl;

	cout << "\nEnter two characters:\n";
	cin >> c1 >> c2;
	cout << Large(c1, c2) << " has larger ASCII value.";

	return 0;
}*/

#include <iostream>
using namespace std;

template <class T>
class Calculator
{
private:
	T num1, num2;

public:
	Calculator(T n1, T n2)
	{
		num1 = n1;
		num2 = n2;
	}

	void displayResult()
	{
		cout << "Numbers are: " << num1 << " and " << num2 << "." << endl;
		cout << "Addition is: " << add() << endl;
		cout << "Subtraction is: " << subtract() << endl;
		cout << "Product is: " << multiply() << endl;
		cout << "Division is: " << divide() << endl;
	}

	T add() { return num1 + num2; }

	T subtract() { return num1 - num2; }

	T multiply() { return num1 * num2; }

	T divide() { return num1 / num2; }
};

int main()
{
	Calculator<int> intCalc(2, 1);
	Calculator<float> floatCalc(2.4, 1.2);

	cout << "Int results:" << endl;
	intCalc.displayResult();

	cout << endl << "Float results:" << endl;
	floatCalc.displayResult();

	return 0;
}
