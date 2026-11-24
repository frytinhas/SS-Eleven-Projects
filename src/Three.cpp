#include "Three.h"

#include <iostream>
#include <ostream>
#define SIZE 10

void Three::Run()
{
    cout << "Please enter " << SIZE << " digits below:" << endl;
    int numbers[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        cin >> numbers[i];
    }

    bool bHasChanges;
    do {
        bHasChanges = false;
        int* left = &numbers[0];
        int* right = &numbers[SIZE - 1];

        while (left < right)
        {
            const int temp = *left;
            // If right be less than left, so swap values and warn that has changes
            if (*right < *left)
            {
                bHasChanges = true;
                *left = *right;
                *right = temp;
                left++;
            }
            // When right be equal left and left dont be greater than max size, move left to right and move right to end
            if (--right == left && left < &numbers[SIZE - 1])
            {
                left++;
                right = &numbers[SIZE - 1];
            }
        }
    } while (bHasChanges);
    
    cout << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cout << numbers[i] << " "; 
    }
}
