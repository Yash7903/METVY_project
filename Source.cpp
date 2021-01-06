//made by swarup Mohapatra//
//swarup.sw@gmail.com//
#include<iostream>
#include<stdlib.h>
#include<limits>
#include<cmath>
#include<ctype.h>
#define PI 3.141
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
void fToC();
void volume();
void area();
void mat_product();
void mat_transpose();
void mat_add();
int main()
{
	//one integer for loop control and one for function control//
	int loop_ctrl=0, function_ctrl=0;
	char control='y';
	//provides user the choice between switching to normal calculator or the scientific version//
	while (control == 'y' || control == 'Y') {
		cout<< "\t\t..MENU..\n\t1.<STANDARD CALCULATOR>\n\t2.<SCIENTIFIC CALCULATOR>" << endl;
		if (!(cin>> loop_ctrl))
				{
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					cout<< "you have entered a wrong choice";
				}
				cout<< "\ncheck complete";
		if (loop_ctrl != 1 && loop_ctrl != 2)
		{
			cout<< "\nerror wrong option entered \n" << "try again ?(y/n)";
			cin>> control;

		}
		else
		{
			while (loop_ctrl == 1)
			{
				cout<< "\nenter desired operation using key provided in brackets '()' :\n";

				cout<< "(1) addition \n";

				cout<< "(2) multiplication\n";

				cout<< "(3) subtraction \n";

				cout<< "(4) division\n";
			
				//avoid infinite loop when a character is entered and corrupts the int cin//
				if (!(cin>> function_ctrl)) 
				{
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max() ); 
					cout<<"\n you have entered wrong choice";
			
				}

				if (function_ctrl > 4 || function_ctrl< 1) 
				{
					function_ctrl = 0;
					cout<< "\n you have entered a wrong choice\n"; break;
					
				}
				cout<< "\ncheck complete"; 
				break;


			}
			while (loop_ctrl == 2)
			{
				cout<< "enter desired operation using key provided in brackets '()'\nscientific options key is (s.number) :\n";

				cout<< "(1) addition \n";

				cout<< "(2) multiplication\n";

				cout<< "(3) subtraction \n";

				cout<< "(4) division\n<<<<<<SCEINTIFIC OPERATIONS>>>>>>\n";

				cout<< "(5) remainder\n";

				cout<< "(6) square\n";

				cout<< "(7)  cube\n";

				cout<< "(8)  cosine\n";

				cout<< "(9)  sine\n";

				cout<< "(10)  tangent\n";

				cout<< "(11) hyperbolic tangent\n";

				cout<< "(12)  hyperbolic cosine\n";

				cout<< "(13)  hyperbolic sine\n";

				cout<< "(14)  arc cosine\n";

				cout<< "(15)  arc sine\n";

				cout<< "(16)  arc tangential\n";

				cout<< "(17) exponent\n";

				cout<< "(18)  logarithm\n";

				cout<< "(19)  common logarithm i.e log10\n";

				cout<< "(20)  arc tangent for 2 numbers \n";

				cout<< "(21)  power\n<<<<<<MEASUREMENT AND 2D OPERATIONS>>>>>>\n";

				cout<<"(22)farenheit to celsius conversion\n";

				cout<<"(23) Volume of various objects (contains sub menu)\n";

				cout<<"(24) area of various objects (contains sub menu)\n";

				cout<<"(25) matrix multiplication\n";

				cout<<"(26) matrix transpose\n";

				cout<<"(27) matrix addition\n";

				//avoid infinite loop when a character is entered and corrupts the int cin//
				if (!(cin>> function_ctrl))
				{
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					cout<< "you have entered a wrong choice";
				}
				cout<< "\ncheck complete";
				break;

			}
		}

		switch (function_ctrl)

		{
		case 1:
		{
			sum();
			cout<< "-----exiting------\n";break;
		}

		case 2:
		{
			product();
			cout<< "-----exiting------\n";break;
		}

		case 3:
		{
			sub();
			cout<< "-----exiting------\n";break;
		}

		case 4:

		{
			div();
			cout<< "-----exiting------\n";break;
		}

		case 5:

		{
			remainder();
			cout<< "-----exiting------\n";break;
		}

		case 6:
		{
			square();
			cout<< "-----exiting------\n";break;
		}
		case 7:
		{
			cube();
			cout<< "-----exiting------\n";break;
		}

		case 8:
		{
			cos();
			cout<< "-----exiting------\n";break;
		}

		case 9:
		{
			sin();
			cout<< "-----exiting------\n";break;
		}

		case 10:
		{
			tan();
			cout<< "-----exiting------\n";break;
		}

		case 11:
		{
			cosh();
			cout<< "-----exiting------*\n";break;
		}

		case 12:

		{
			sinh();
			cout<< "-----exiting------\n";break;
		}

		case 13:
		{
			tanh();
			cout<< "-----exiting------\n";break;
		}

		case 14:
		{
			acos();
			cout<< "-----exiting------\n";break;
		}

		case 15:
		{
			asin();
			cout<< "-----exiting------\n";break;
		}

		case 16:
		{
			atan();
			cout<< "-----exiting------\n";break;
		}

		case 17:
		{
			exp();
			cout<< "-----exiting------*\n";break;
		}
		case 18:
		{
			log();
			cout<< "-----exiting------\n";break;
		}

		case 19:
		{
			log10();
			cout<< "-----exiting------\n";break;
		}

		case 20:

		{
			atan2();
			cout<< "-----exiting------\n";break;
		}

		case 21:
		{
			pow();
			cout<< "-----exiting------\n";break;
		}
		case 22:
		{
			fToC();
			cout<< "-----exiting------\n";break;
		}
		case 23:
		{
			volume();
			cout<< "\n-----exiting------\n";break;
		}
		case 24:
		{
			area();
			cout<< "\n-----exiting------\n";break;
		}
		case 25:
		{
			mat_product();
			cout<< "\n-----exiting------\n";break;
		}
			case 26:
		{
			mat_transpose();
			cout<< "\n-----exiting------\n";break;
		}
			case 27:
		{
			mat_add();
			cout<< "\n-----exiting------\n";break;
		}
	
		default :
		{
			cout<<"\nwrong choice entered";break;
		}
	
		}
		cout<< "\nwant to continue? (y/n)";
		cin>> control;
	}
}

void sum()

{
	int a, b, sum;
	cout<< "\nenter the first number\n";
	cin>> a;
	cout<< "\nenter the second number\n";
	cin>> b;
	sum = a + b;
	cout<< "sum is" << sum << endl;
}

void product()

{
	int a, b, product;
	cout<< "\nenter the first number\n";
	cin>> a;
	cout<< "\nenter the second number\n";
	cin>> b;
	product = a * b;
	cout<< "product is" << product << endl;
}

void sub()

{
	int a, b, sub;
	cout<< "\nenter the first number\n";
	cin>> a;
	cout<< "\nenter the second number\n";
	cin>> b;
	sub = a - b;
	cout<< "subtraction is" << sub << endl;
}

void div()

{
	double a, b, div;
	cout<< "\nenter the first number\n";
	cin>> a;
	cout<< "\nenter the second number\n";
	cin>> b;
	div = a / b;
	cout<< "division is" << div << endl;
}

void remainder()

{
	int a, b, remainder;
	cout<< "\nenter the first number\n";
	cin>> a;
	cout<< "\nenter the second number\n";
	cin>> b;
	remainder = a * b;
	cout<< "remainder is" << remainder << endl;
}

void square()

{
	int a, square;
	cout<< "\nenter the number\n";
	cin>> a;
	square = a * a;
	cout<< "square is" << square << endl;
}

void cube()

{
	int a, cube;	
	cout<< "\nenter the number\n";
	cin>> a;
	cube = a * a * a;
	cout<< "cube is" << cube << endl;
}

void cos()

{
	double a, result ;
	cout<< "\nenter the angle\n";
	cin>> a;
	result = cos(a * PI / 180);
	cout<< "the cosine of " << a << " is " << result << endl;
}

void sin()

{
	double a, result ;
	cout<< "\nenter the angle\n";
	cin>> a;
	result = sin(a * PI / 180);
	cout<< "the sine of " << a << " is " << result << endl;
}

void tan()

{
	double a, result ;
	cout<< "\nenter the angle\n";
	cin>> a;
	result = tan(a * PI / 180);
	cout<< "the tan of the " << a << " is " << result << endl;
}

void cosh()

{
	double a, result ;
	cout<< "\nenter the angle\n";
	cin>> a;
	result = cosh(a);
	cout<< "the hyperbolic cosine of " << a << " is " << result << endl;
}

void sinh()

{
	double a, result ;
	cout<< "\nenter the angle\n";
	cin>> a;
	result = sinh(a);
	cout<< "the hyperbolic sine of " << a << " is " << result << endl;
}

void tanh()

{
	
	double a, result ;
	cout<< "\nenter the angle\n";
	cin>> a;
	result = tanh(a);
	cout<< "The hyperbolic tangent of " << a << " is " << result << endl;
}

void acos()

{
	double a, result ;
	cout<< "\nenter the angle\n";
	cin>> a;
	result = acos(a) * 180.0 / PI;
	cout<< "The arc cosine of " << a << " is " << result << endl;
}

void asin()

{
	double a, result ;
	cout<< "\nenter the angle\n";
	cin>> a;
	result = asin(a) * 180.0 / PI;
	cout<< "The arc sine of " << a << " is " << result << endl;
}

void atan()

{
	double a, result ;
	cout<< "\nenter the angle\n";
	cin>> a;
	result = tanh(a);
	cout<< "The arc tangential of " << a << " is " << result << endl;
}

void exp()

{
	double a, result;
	cout<< "\nenter the number\n";
	cin>> a;
	result = exp(a);
	cout<< "The exponential value of " << a << " is = " << result << endl;
}

void log()

{
	double a, result;
	cout<< "\nenter the value to take a log \n";
	cin>> a;
	result = log(a);
	cout<< "The logarithm of " << a << " is " << result << endl;
}

void log10()

{
	double a, result;
	cout<< "\nenter the value to take a log \n";
	cin>> a;
	result = log10(a);
	cout<< "The common logarithm of " << a << " is " << result << endl;
}

void atan2()

{
	double a, b, result ;
	cout<< "\nenter the first number\n";
	cin>> a;
	cout<< "\nenter second the number\n";
	cin>> b;
	result = atan2(a, b) * 180 / PI;
	cout<< "The arc tangent for " << a << " and " << b << " is " << result << endl;
	
}

void pow()
{
	int a, b, power;
	cout<< "\nenter the number\n";
	cin>> a;
	cout<< "\nenter the power\n";
	cin>> b;
	power = pow(a, b);
	cout<< "\n" << a << " raise to power " << b << " is " << power;

}
void fToC()
 {
	 double fahrenheit=0,celsius=0;
	cout<<"enter the temperature in farenheit";
	cin>>fahrenheit;
     celsius = (fahrenheit-32.0)* 5.0/9.0;
     cout<<"the temperature in celsius is "<<celsius;
 }
void volume ()
{
	double x1,x2,x3;
	int ch;
	cout<<"\n\t\t1>cube\n\t\t2>cuboid\n\t\t3>sphere\n\t\t4>cylinder";
	cin>>ch;
	switch (ch)
	{
		case 1:
		{
			cout<<"\nenter the side length";
			cin>>x1;
			cout<<"\nthe volume is "<<x1*x1*x1;break;
		}
		case 2:
		{
			cout<<"\nenter the length , heigth and breadth of cuboid ";
			cin>>x1>>x2>>x3;
			cout<<"\nthe volume is "<<x1*x2*x3;break;
		}
		case 3:
		{
			cout<<"\nenter the radius";
			cin>>x1;
			cout<<"\nthe volume is "<<x1*(4/3)*x1*x1*PI;break;
		}
		case 4:
		{
			cout<<"enter the radius and heigth";
			cin>>x1>>x2;
			cout<<"\nthe volume is "<<x1*x2*x1*PI;break;
		}
		default:
		{
			cout<<"wrong choice entered";break;
		}
	}
}
void area ()
{
	double x1,x2;
	int ch;
	cout<<"\n\t\t1>square\n\t\t2>rectangle\n\t\t3>circle\n\t\t4>triangle";
	cin>>ch;
	switch (ch)
	{
		case 1:
		{
			cout<<"\nenter the side length";
			cin>>x1;
			cout<<"\nthe area is "<<x1*x1;break;
		}
		case 2:
		{
			cout<<"\nenter the length and breadth of rectangle ";
			cin>>x1>>x2;
			cout<<"\nthe area is "<<x1*x2;break;
		}
		case 3:
		{
			cout<<"\nenter the radius";
			cin>>x1;
			cout<<"\nthe area is "<<x1*x1*PI;break;
		}
		case 4:
		{
			cout<<"enter the base and heigth";
			cin>>x1>>x2;
			cout<<"\nthe area is "<<x1*x2*0.5;break;
		}
		default:
		{
			cout<<"wrong choice entered";break;
		}
	}
}
void mat_product()
{
    int r1, c1, r2, c2, i, j, k;
    int A[5][5], B[5][5], C[5][5];
    cout << "\nEnter number of rows and columns of matrix A : ";
    cin >> r1 >> c1;
    cout << "Enter number of rows and columns of matrix B : ";
    cin >> r2 >> c2; 
    if (c1 != r2)
    {
        cout << "Matrices cannot be multiplied!";
        exit(0);
    }	
    cout << "Enter elements of matrix A (row-wise) : ";
    for (i = 0; i < r1; i++)
        for (j = 0; j < c1; j++)
            cin >> A[i][j];
    cout << "Enter elements of matrix B (row-wise) : ";
    for (i = 0; i < r2; i++)
        for (j = 0; j < c2; j++)
            cin >> B[i][j];		
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            C[i][j] = 0;
            for (k = 0; k < r2; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    cout << "Product of matrices\n";
    for (i = 0; i < r1; i++)
    {    
        for (j = 0; j < c2; j++)
            cout << C[i][j] << "  ";
        cout << "\n";
    }
}
void mat_transpose()
{
    int A[10][10], m, n, i, j;
    cout << "\nEnter rows and columns of matrix : ";
    cin >> m >> n;
    cout << "Enter elements of matrix (row-wise) : ";
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            cin >> A[i][j];
    cout << "Entered Matrix : \n ";
    for (i = 0; i < m; i++)
    { 
        for (j = 0; j < n; j++)
            cout << A[i][j] << " ";
        cout << "\n ";
    }
    cout << "Transpose of Matrix : \n ";
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
            cout << A[j][i] << " ";
        cout << "\n ";
    }
}
void mat_add()
{
    int m, n, p, q, i, j, A[5][5], B[5][5], C[5][5];
    cout << "\nEnter rows and column of matrix A : ";
    cin >> m >> n;
    cout << "Enter rows and column of matrix B : ";
    cin >> p >> q; 
    if ((m != p) && (n != q))
    {
        cout << "Matrices cannot be added!";
        exit(0);
    }	
    cout << "Enter elements of matrix A (row-wise) : ";
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            cin >> A[i][j];
	cout << "Enter elements of matrix B (row-wise) : ";
    for (i = 0; i < p; i++)
        for (j = 0; j < q; j++)
            cin >> B[i][j];		
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            C[i][j] = A[i][j] + B[i][j];
    cout << "Sum of matrices\n";
    for (i = 0; i < m; i++)
    {    for (j = 0; j < n; j++)
            cout << C[i][j] << "  ";	
        cout << "\n";
    }
}