#include <iostream>

#include "Challenge.h"
#include "Three.h"
#include "Two.h"

using namespace std;
int main() {
    
    Challenge* ChallengeThree = new Three;
    Challenge* ChallengeTwo = new Two;
    
    cout << "CHALLENGE 2:" << endl;
    ChallengeTwo->Run();
    cout << endl << "CHALLENGE 3:" << endl;
    ChallengeThree->Run();
    
    delete ChallengeThree;
    delete ChallengeTwo;
    return 0;
}
