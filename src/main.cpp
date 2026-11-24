#include <iostream>

#include "Challenge.h"
#include "Three.h"
#include "Two.h"

using namespace std;
int main() {
    
    Challenge* ChallengeThree = new Three;
    Challenge* ChallengeTwo = new Two;
    
    cout << endl << ChallengeThree->Run() << endl;
    cout << endl << ChallengeTwo->Run();
    return 0;
}
