#include <iostream>
#include "number.h"

using namespace std;

int main() {
    Number num1 = Number();
    cout << num1.get() << endl;
    Number num2 = Number();
    cout << num2.get() << endl;
    return 0;
}
