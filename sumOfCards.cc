#include <iostream>
using namespace std;

int sumOfCards(int cards[])
{
    int sum = 0;
    for(int i = 0; i <4; i++)
    {
        sum += cards[i]; 
    }

    return sum;
}

int main() 
{
    int cards[4] = {7, 4, 2, 6};

    int total = sumOfCards(cards);
    cout << "The sum of the array is: " << total << '.' << endl;

    return 0;
}
