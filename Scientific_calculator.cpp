#include<iostream>
#include<cmath>
using namespace std;

 double add(double a, double b)
    {
        return a+b;
	}
double subtract(double a, double b)
{
	return a-b;
}
double multiply(double a, double b)
{
	return a*b;
}
double divide(double a, double b)
{
		if (b != 0)
        return a / b;
    else {
        cout << "Division by zero not possible" << endl;
        return 0;
}

}
double sine(double angle)
{
	 return sin(angle);
}
double cosine(double angle)
{
	 return cos(angle);
}
double tangent(double angle)
{
	 return tan(angle);
}
double natural_log(double value)
{
	if (value > 0)
        return log(value);
    else {
        cout << "Natural logarithm cannot be defined for negative values!" << endl;
        return 0;
    }
}
double log_base10(double value)
{
		if (value > 0)
        return log10(value);
    else {
        cout << "Logarithm base 10 cannot be defined for negative values!" << endl;
        return 0;
    }
}
double power(double base, double exponent)
{
	 return pow(base, exponent);
}
long long factorial(int n)
{
if (n < 0) {
        cout << "Factorial cannot be defined for negative numbers!" << endl;
        return 0;
    }
    long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;	
}
int main()
{
	 int choice;
    double num1, num2;
    int num;
    double result;

    cout << "\nScientific Calculator\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "5. Sine\n";
    cout << "6. Cosine\n";
    cout << "7. Tangent\n";
    cout << "8. Natural Logarithm (ln)\n";
    cout << "9. Logarithm base 10 (log10)\n";
    cout << "10. Exponentiation\n";
    cout << "11. Factorial\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            result = add(num1, num2);
            break;
        case 2:
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            result = subtract(num1, num2);
            break;
        case 3:
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            result = multiply(num1, num2);
            break;
        case 4:
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            result = divide(num1, num2);
            break;
        case 5:
            cout << "Enter an angle in radians: ";
            cin >> num1;
            result = sine(num1);
            break;
        case 6:
            cout << "Enter an angle in radians: ";
            cin >> num1;
            result = cosine(num1);
            break;
        case 7:
            cout << "Enter an angle in radians: ";
            cin >> num1;
            result = tangent(num1);
            break;
        case 8:
            cout << "Enter a value: ";
            cin >> num1;
            result = natural_log(num1);
            break;
        case 9:
            cout << "Enter a value: ";
            cin >> num1;
            result = log_base10(num1);
            break;
        case 10:
            cout << "Enter base and exponent: ";
            cin >> num1 >> num2;
            result = power(num1, num2);
            break;
        case 11:
            cout << "Enter a number: ";
            cin >> num;
            result = factorial(num);
            break;
        default:
            cout << "Invalid choice!" << endl;
            return 1;
    }

    cout << "Result: " << result << endl;

    return 0;
}



