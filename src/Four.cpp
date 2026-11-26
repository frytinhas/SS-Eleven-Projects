#include "Four.h"
#include <iostream>
#include <vector>

using namespace std;
void four::run()
{
    int fibonacci_quantity;
    cout << "How many fibonacci numbers do u want? ";
    cin >> fibonacci_quantity;
    
    vector numbers = {1, 1};
    for (int i = 2; i < fibonacci_quantity; i++)
    {
        numbers.push_back(numbers[i - 1] + numbers[i - 2]);
    }
    
    for (const auto& n : numbers)
    {
        cout << endl << n << " ";
    }
}
