#include <iostream>

#include "Challenge.h"
#include "Four.h"
#include "Three.h"
#include "Two.h"

using namespace std;
int main() {
    challenge* current_challenge = new two;
    
    cout << "/// CHALLENGE 2 ///" << endl;
    current_challenge->run();
    delete current_challenge;
    
    current_challenge = new three;
    cout << endl << "/// CHALLENGE 3 ///" << endl;
    current_challenge->run();
    delete current_challenge;
    
    current_challenge = new four;
    cout << endl << "/// CHALLENGE 4 ///" << endl;
    current_challenge->run();
    delete current_challenge;
    
    return 0;
}
