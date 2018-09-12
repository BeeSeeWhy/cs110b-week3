#include <cmath>
#include <iostream>
using namespace std;

void showMenu();
double getFirstNum();
double getSecondNum();
double addition();
double subtraction();
double multiplication();
double division();
double square();
double squareroot();
double cube();
double cuberoot();
double power();


int main()
{
    	int choice;
	double result;

    	showMenu();
    	cout << "Enter your choice: ";
    	cin >> choice;


    	switch (choice)
    	{
        case 1 :
                result = addition();
                break;
        case 2 :
                result = subtraction();
                break;
        case 3 :
                result = multiplication();
                break;
        case 4 :
                result = division();
                break;
        case 5 :
                result = square();
                break;
        case 6 :
                result = squareroot();
                break;
        case 7 :
                result = cube();
                break;
        case 8 :
                result = cuberoot();
                break;
      	case 9 :
                result = power();
                break;
        case 10 :
                break;
        default:
                cout << "Invalid choice." << endl;
    	}
	
    	cout << "The result is " << result << '.' << endl;
    

    	return 0;

}



void showMenu()
{
        cout << "Menu:" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Square" << endl;
        cout << "6. Square Root" << endl;
        cout << "7. Cube" << endl;
        cout << "8. Cube Root" << endl;
        cout << "9. Power" << endl;
        cout << "10. Exit" << endl;
}

double getFirstNum()
{
    	double num1;
    	cout << "Enter first number: ";
    	cin >> num1;

    	return num1;
}

double getSecondNum()
{
    	double num2;
   	cout << "Enter second number: ";
    	cin >> num2;

    	return num2;
}

double addition()
{
        double num1, num2, result;

        num1 = getFirstNum();
        num2 = getSecondNum();

        result =  num1 + num2;

	return result;
}

double subtraction()
{
        double num1, num2, result;
    
        num1 = getFirstNum();
        num2 = getSecondNum();

        result = num1 - num2;

	return result;
}

double multiplication()
{
    	double num1, num2, result;

    	num1 = getFirstNum();
    	num2 = getSecondNum();

    	result = num1 * num2;

	return result;
}

double division()
{
    	double num1, num2, result;
    	num1 = getFirstNum();
    	num2 = getSecondNum();

    	if (num2 == 0)
    	{
        	cout << "You cannot divide by 0" << endl;
        	cout << "Enter second number: ";
        	cin >> num2;
    	}

    	result = num1 / num2;
	
	return result;
}

double square()
{
    	double num1, result;
    	num1 = getFirstNum();

    	result = pow(num1, 2.0);

	return result;
}

double squareroot()
{
    	double num1, result;
    	num1 = getFirstNum();

    	result = sqrt(num1);

	return result;
}

double cube()
{
    	double num1, num2, result;
    	num1 = getFirstNum();

	result = pow(num1, 3.0);

	return result;
}

double cuberoot()
{
	double num1, result;
	num1 = getFirstNum();
	
	result = pow(num1, 0.33333333333);

	return result;
}

double power()
{
    	double num1, num2, result;
    	num1 = getFirstNum();
    	num2 = getSecondNum();

    	result = pow(num1, num2);

	return result;
}
