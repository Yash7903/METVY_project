
#include<iostream>
#include<stdlib.h>
#include<cmath>
using namespace std;
void sum();
void product();
void sub();
void div();
void remainder();
void square();
void cube();
void cos();
void sin();
void tan();
void cosh();
void sinh();
void tanh();
void acos();
void asin();
void atan();
void exp();
void log();
void log10();
void atan2();
void pow();
int main()

{
	//one integer for loop control and one for function control//
	int loop_ctrl=0, function_ctrl=0;
	char control='y';
	//provides user the choice between switching to normal calculator or the scientific version//
	while (control == 'y' || control == 'Y') {
		cout << "\t\t..MENU..\n\t1.<STANDARD CALCULATOR>\n\t2.<SCIENTIFIC CALCULATOR>" << endl;
		cin >> loop_ctrl;
		if (loop_ctrl != 1 && loop_ctrl != 2)
		{
			cout << "error wrong option entered \n" << "try again ?(y/n)";
			cin >> control;

		}
		else
		{
			while (loop_ctrl == 1)
			{
				cout << "enter desired operation using key provided in brackets '()' :\n";

				cout << "(1) addition \n";

				cout << "(2) multiplication\n";

				cout << "(3) subtraction \n";

				cout << "(4) division\n";
				
				cin >> function_ctrl;
				
				break;


			}
			while (loop_ctrl == 2)
			{
				cout << "enter desired operation using key provided in brackets '()'\nscientific options key is (s.number) :\n";

				cout << "(1) addition \n";

				cout << "(2) multiplication\n";

				cout << "(3) subtraction \n";

				cout << "(4) division\n\n\n";

				cout << "(5) remainder\n";

				cout << "(6) square\n";

				cout << "(7)  cube\n";

				cout << "(8)  cosine\n";

				cout << "(9)  sine\n";

				cout << "(10)  tangent\n";

				cout << "(11) hyperbolic tangent\n";

				cout << "(12)  hyperbolic cosine\n";

				cout << "(13)  hyperbolic sine\n";

				cout << "(14)  arc cosine\n";

				cout << "(15)  arc sine\n";

				cout << "(16)  arc tangential\n";

				cout << "(17) exponent\n";

				cout << "(18)  logarithm\n";

				cout << "(19)  common logarithm i.e log10\n";

				cout << "(20)  atan2\n";

				cout << "(21)  power\n";

				cin >> function_ctrl;

				break;



			}
		}

		if (function_ctrl == 1)
		{
			sum();
			cout << "-----exiting------\n";
		}

		else if (function_ctrl == 2)
		{
			product();
			cout << "-----exiting------\n";
		}

		else if (function_ctrl == 3)
		{
			sub();
			cout << "-----exiting------\n";
		}

		if (function_ctrl == 4)

		{
			div();
			cout << "-----exiting------\n";
		}

		else if (function_ctrl == 5)

		{
			remainder();
			cout << "-----exiting------\n";
		}

		else if (function_ctrl == 6)
		{
			square();
			cout << "-----exiting------\n";
		}
		else if (function_ctrl == 7)
		{
			cube();
			cout << "-----exiting------\n";
		}

		else if (function_ctrl == 8)
		{
			cos();
			cout << "-----exiting------\n";
		}

		else if (function_ctrl == 9)
		{
			sin();
			cout << "-----exiting------\n";
		}

		else if (function_ctrl == 10)
		{
			tan();
			cout << "-----exiting------\n";
		}

		else if (function_ctrl == 11)
		{
			cosh();
			cout << "-----exiting------*\n";
		}

		else if (function_ctrl == 12)

		{
			sinh();
			cout << "-----exiting------\n";
		}

		else if (function_ctrl == 13)
		{
			tanh();
			cout << "-----exiting------\n";
		}

		else if (function_ctrl == 14)
		{
			acos();
			cout << "-----exiting------\n";
		}

		else if (function_ctrl == 15)
		{
			asin();
			cout << "-----exiting------\n";
		}

		else if (function_ctrl == 16)
		{
			atan();
			cout << "-----exiting------\n";
		}

		else if (function_ctrl == 17)
		{
			exp();
			cout << "-----exiting------*\n";
		}
		else if (function_ctrl == 18)
		{
			log();
			cout << "-----exiting------\n";
		}

		else if (function_ctrl == 19)
		{
			log10();
			cout << "-----exiting------\n";
		}

		else if (function_ctrl == 20)

		{
			atan2();
			cout << "-----exiting------\n";
		}

		else if (function_ctrl == 21)
		{
			pow();
			cout << "-----exiting------\n";
		}

		cout << "want to continue? (y/n)";
		cin >> control;
	}
}

void sum()

{
	int a, b, sum;
	cout << "\nenter the first number\n";
	cin >> a;
	cout << "\nenter the second number\n";
	cin >> b;
	sum = a + b;
	cout << "sum is" << sum << endl;
}

void product()

{
	int a, b, product;
	cout << "\nenter the first number\n";
	cin >> a;
	cout << "\nenter the second number\n";
	cin >> b;
	product = a * b;
	cout << "product is" << product << endl;
}

void sub()

{
	int a, b, sub;
	cout << "\nenter the first number\n";
	cin >> a;
	cout << "\nenter the second number\n";
	cin >> b;
	sub = a - b;
	cout << "subtraction is" << sub << endl;
}

void div()

{
	int a, b, div;
	cout << "\nenter the first number\n";
	cin >> a;
	cout << "\nenter the second number\n";
	cin >> b;
	div = a / b;
	cout << "division is" << div << endl;
}

void remainder()

{
	int a, b, remainder;
	cout << "\nenter the first number\n";
	cin >> a;
	cout << "\nenter the second number\n";
	cin >> b;
	remainder = a * b;
	cout << "remainder is" << remainder << endl;
}

void square()

{
	int a, square;
	cout << "\nenter the number\n";
	cin >> a;
	square = a * a;
	cout << "square is" << square << endl;
}

void cube()

{
	int a, cube;	
	cout << "\nenter the number\n";
	cin >> a;
	cube = a * a * a;
	cout << "cube is" << cube << endl;
}

void cos()

{
	double a, result, PI = 3.14159265;
	cout << "\nenter the angle\n";
	cin >> a;
	result = cos(a * PI / 180);
	cout << "the cosine of " << a << " is " << result << endl;
}

void sin()

{
	double a, result, PI = 3.14159265;
	cout << "\nenter the angle\n";
	cin >> a;
	result = sin(a * PI / 180);
	cout << "the sine of " << a << " is " << result << endl;
}

void tan()

{
	double a, result, PI = 3.14159265;
	cout << "\nenter the angle\n";
	cin >> a;
	result = tan(a * PI / 180);
	cout << "the tan of the " << a << " is " << result << endl;
}

void cosh()

{
	double a, result, PI = 3.14159265;
	cout << "\nenter the angle\n";
	cin >> a;
	result = cosh(a);
	cout << "the hyperbolic cosine of " << a << " is " << result << endl;
}

void sinh()

{
	double a, result, PI = 3.14159265;
	cout << "\nenter the angle\n";
	cin >> a;
	result = sinh(a);
	cout << "the hyperbolic sine of " << a << " is " << result << endl;
}

void tanh()

{
	
	double a, result, PI = 3.14159265;
	cout << "\nenter the angle\n";
	cin >> a;
	result = tanh(a);
	cout << "The hyperbolic tangent of " << a << " is " << result << endl;
}

void acos()

{
	double a, result, PI = 3.14159265;
	cout << "\nenter the angle\n";
	cin >> a;
	result = acos(a) * 180.0 / PI;
	cout << "The arc cosine of " << a << " is " << result << endl;
}

void asin()

{
	double a, result, PI = 3.14159265;
	cout << "\nenter the angle\n";
	cin >> a;
	result = asin(a) * 180.0 / PI;
	cout << "The arc sine of " << a << " is " << result << endl;
}

void atan()

{
	double a, result, PI = 3.14159265;
	cout << "\nenter the angle\n";
	cin >> a;
	result = tanh(a);
	cout << "The arc tangential of " << a << " is " << result << endl;
}

void exp()

{
	double a, result;
	cout << "\nenter the number\n";
	cin >> a;
	result = exp(a);
	cout << "The exponential value of " << a << " is = " << result << endl;
}

void log()

{
	double a, result;
	cout << "\nenter the value to take a log \n";
	cin >> a;
	result = log(a);
	cout << "The logarithm of " << a << " is " << result << endl;
}

void log10()

{cd
	double a, result;
	cout << "\nenter the value to take a log \n";
	cin >> a;
	result = log10(a);
	cout << "The common logarithm of " << a << " is " << result << endl;
}

void atan2()

{
	float a, b, result, PI = 3.14;
	cout << "\nenter the first number\n";
	cin >> a;
	cout << "\nenter second the number\n";
	cin >> b;
	result = atan2(a, b) * 180 / PI;
	cout << "The arc tangent for " << a << " and " << b << " is " << result << endl;
	
}

void pow()
{
	int a, b, power;
	cout << "\nenter the number\n";
	cin >> a;
	cout << "\nenter the power\n";
	cin >> b;
	power = pow(a, b);
	cout << "\n" << a << " raise to power " << b << " is " << power;

}