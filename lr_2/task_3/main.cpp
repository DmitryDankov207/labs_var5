#include <iostream>
#include "C.h"

using namespace std;

int main() {
    C equation1(1., 2., 1.);
    C equation2(2., 4., -5.);
    
    cout << "x^2 + 2x + 1 = 0:" << endl;
    cout << "x1 = " << equation1.getX1() << endl;
    cout << "x2 = " << equation1.getX2() << endl;
    
    cout << "2x^2 + 4x - 5 = 0:" << endl;
    cout << "x1 = " << equation2.getX1() << endl;
    cout << "x2 = " << equation2.getX2() << endl;
    
    return 0;
}
