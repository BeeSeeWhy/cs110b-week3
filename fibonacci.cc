#include <array>
#include <iostream>
using namespace std;

void generateNum(int array[], int count)
{
    
    array[0] = 0;
    array[1] = 1;
    
    if(count == 0)
    {
        cout << array[0] << endl;
    }
    else if(count == 1)
    {
        cout << array[0] << endl; 
        cout << array[1] << endl;
    }
    else
    {
        cout << array[0] << endl;
        cout << array[1] << endl;
        for(int i = 2; i <= count; i++)
        {
            array[i] = array[i-1] + array[i-2];
            cout << array[i] << endl;
        }
    }
}

int main()
{
    	int count;
    	int array[count];
    	cout << "Enter count: ";
    	cin >> count;
	
	generateNum(array, count);

	return 0;

}
