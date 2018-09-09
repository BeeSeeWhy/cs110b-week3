#include <iomanip>
#include <iostream>
using namespace std;

float toCelsius(float farenheit)
{
    float celsius = 5.0 / 9.0 * (farenheit - 32);
    return celsius; 
}

int main()
{
    float farenheit;
    cout << "Enter temperature in Farenheit: ";
    cin >> farenheit;

    cout << endl;
    
    float celsius0 = toCelsius(farenheit + 0.5);
    
    cout << setw(8) << "F  " << '|' << setw(8) << "C    " << endl;
    cout << setw(8) << farenheit + 0.5 << '|' << setw(8) << celsius0 << endl;

    float celsius1 = toCelsius(farenheit + 0.4);
    cout << setw(8) << farenheit + 0.4 << '|' << setw(8) << celsius1 << endl;

    float celsius2 = toCelsius(farenheit + 0.3);
    cout << setw(8) << farenheit + 0.3 << '|' << setw(8) << celsius2 << endl;

    float celsius3 = toCelsius(farenheit + 0.2);
    cout << setw(8) << farenheit + 0.2 << '|' << setw(8) << celsius3 << endl;

    float celsius4 = toCelsius(farenheit + 0.1);
    cout << setw(8) << farenheit + 0.1 << '|' << setw(8) << celsius4 << endl;

    float celsius5 = toCelsius(farenheit);
    cout << setw(8) << farenheit << '|' << setw(8) << celsius5 << endl;

    float celsius6 = toCelsius(farenheit - 0.1);
    cout << setw(8) << farenheit - 0.1 << '|' << setw(8) << celsius6 << endl;

    float celsius7 = toCelsius(farenheit - 0.2);
    cout << setw(8) << farenheit - 0.2 << '|' << setw(8) << celsius7 << endl;

    float celsius8 = toCelsius(farenheit - 0.3);
    cout << setw(8) << farenheit - 0.3 << '|' << setw(8) << celsius8 << endl;

    float celsius9 = toCelsius(farenheit - 0.3);
    cout << setw(8) << farenheit - 0.3 << '|' << setw(8) << celsius9 << endl;

    float celsius10 = toCelsius(farenheit - 0.4);
    cout << setw(8) << farenheit - 0.4 << '|' << setw(8) << celsius10 << endl;

    float celsius11 = toCelsius(farenheit - 0.5);
    cout << setw(8) << farenheit - 0.5 << '|' << setw(8) << celsius11 << endl;

    return 0;


}
