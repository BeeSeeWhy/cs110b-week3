#include <cmath>
#include <iostream>
using namespace std;

void showMenu();
int getFirstNum();
int getSecondNum();
void addition();
void subtraction();
void multiplication();
void division();
void square();
void squareroot();
void cube();
void cuberoot();
void power();


int main()
{
    int choice, num1, num2, result;

    showMenu();
    cout << "Enter your choice: ";
    cin >> choice;


    switch (choice)
    {
        case 1 :
                // do addition;
                addition();
                break;
        case 2 :
                // subtraction
                subtraction();
                break;
        case 3 :
                // multiplication
                multiplication();
                break;
        case 4 :
                // division
                division();
                break;
        case 5 :
                // square
                square();
                break;
        case 6 :
                // square root
                squareroot();
                break;
        case 7 :
                // cube
                cube();
                break;
        case 8 :
                // cube root 
                cuberoot();
                break;
        case 9 :
                //power
                power();
                break;
        case 10 :
                break;
        default:
                cout << "Invalid choice." << endl;
    }

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

int getFirstNum()
{
    int num1;
    cout << "Enter first number: ";
    cin >> num1;

    return num1;
}

int getSecondNum()
{
    int num2;
    cout << "Enter second number: ";
    cin >> num2;

    return num2;
}
void addition()
{
        //do addition
        int num1, num2, result;

        num1 = getFirstNum();
        num2 = getSecondNum();

        result =  num1 + num2;
        cout << "The result is " << result << '.' << endl;
}

void subtraction()
{
        //do subtraction
        int num1, num2, result;
    
        num1 = getFirstNum();
        num2 = getSecondNum();

        result = num1 - num2;
        cout << "The result is " << result << '.' << endl;
}

void multiplication()
{
    int num1, num2, result;

    num1 = getFirstNum();
    num2 = getSecondNum();

    result = num1 * num2;
    cout << "The result is " << result << '.' << endl;
}

void division()
{
    int num1, num2, result;
    num1 = getFirstNum();
    num2 = getSecondNum();

    if (num2 == 0)
    {
        cout << "You cannot divide by 0" << endl;
        cout << "Enter second number: ";
        cin >> num2;
    }

    result = num1 / num2;
    cout << "The result is " << result << endl;
}

void square()
{
    int num1, result;
    num1 = getFirstNum();

    result = pow(num1, 2.0);
    cout << "The result is " << result << '.' << endl;
}

void squareroot()
{
    double num1, result;
    num1 = getFirstNum();

    result = sqrt(num1);
    cout << "The result is " << result << '.' << endl;
}

void cube()
{
    double num1, num2, result;
    num1 = getFirstNum();

    result = pow(num1, 3.0);
    cout << "The result is " << result << '.' << endl;
}

void cuberoot()
{
    double num1, result;
    num1 = getFirstNum();

    result = pow(num1, 0.33333333333);
    cout << "The result is " << result << '.' << endl;
}

void power()
{
    int num1, num2, result;
    num1 = getFirstNum();
    num2 = getSecondNum();

    result = pow(num1, num2);
    cout << "The result is " << result << '.' << endl;
}
