#include "Two.h"

#include <iostream>
#include <ostream>

void Two::Run()
{
    const int quiz = 4;
    const int students = 5;
    double notes[quiz][students];
    
    //read the notes
    for (int q = 0; q < quiz; q++)
    {
        cout << "insert " << quiz << " notes of question" << (q + 1) << ": ";
        for (int a = 0; a < students; a++)
        {
            cin >> notes[q][a];
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
        cout << "Total points of this student " << (a + 1) << ": " << (addition / quiz) << endl;
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
}
