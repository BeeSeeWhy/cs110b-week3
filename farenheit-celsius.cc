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

    float celsius = toCelsius(farenheit);
    cout << "The temperature in Celsius is: " << celsius << '.' << endl;

    return 0;


}
