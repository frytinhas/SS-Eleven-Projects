#include <iostream>
#define SIZE 10

using namespace std;
int main() {
    cout << "CHALLENGE 2:" << endl;
    const int quiz = 4;
    const int students = 5;
    double notes[quiz][students];
    
    //read the notes
    for (int q = 0; q < quiz; q++)
    {
        cout << "Insert five students notes for quiz " << q + 1 << ":\n";
        for (int s = 0; s < students; s++)
        {
            cin >> notes[q][s];
        }
    }
    
    cout << endl;
    
    //calculate the notes (columns)
    for (int a = 0; a < students; a++)
    {
        double addition = 0;
        for (int q = 0; q < quiz; q++)
        {
            addition += notes[q][a];
        }
        cout << "Total points of this student " << (a + 1) << ": " << addition << endl;
        cout << "Average points of this student " << (a + 1) << ": " << (addition / quiz) << endl;
    }
    
    //calculate per questions (lines)
    for (int q =0 ; q < quiz; q++)
    {
        double addition = 0;
        double great = notes[q][0];
        double less = notes[q][0];
        
        for (int a = 0; a < students; a++)
        {
            double actual = notes[q][a];
            addition += actual;
            if (actual > great) great = actual;
            if (actual < less ) less = actual;
        }
        
        cout << "\nAverage score in the quiz " << (q + 1) << ": " << (addition / students) << endl;
        cout << "\nMaximum score in the quiz " << (q + 1) << ": " << great << endl;
        cout << "\nMinimal score in the quiz " << (q + 1) << ": " << less << endl;
    }
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////
    cout << endl << "CHALLENGE 3:" << endl;
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
    
    return 0;
}
