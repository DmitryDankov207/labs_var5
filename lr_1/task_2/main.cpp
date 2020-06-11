#include <iostream>
#include "bMoney.h"

using namespace std;

bMoney operator*(const bMoney& left, const bMoney& right) {
    return bMoney(left.value * right.value);
}

bMoney operator/(const bMoney& left, const bMoney& right) {
    return right.value != 0 ? bMoney(left.value / right.value) : -1;
}

bMoney operator*(const long double& left, const bMoney& right) {
    return bMoney(left * right.value);
}

bMoney operator/(const long double& left, const bMoney& right) {
    return right.value != 0 ? bMoney(left / right.value) : -1;
}

int main() {
    bMoney acc1 = bMoney(2.);
    bMoney acc2 = bMoney(33345.5678);
    long double num = 5000000.;
    cout << "acc1 = " << (acc1).get() << endl;
    cout << "acc2 = " << (acc2).get() << endl;
    cout << "acc1 / acc2 = " << (acc1 / acc2).get() << endl;
    cout << "acc2 / acc1 = " << (acc2 / acc1).get() << endl; 
    cout << "acc2 * acc1 = " << (acc2 * acc1).get() << endl; 
    cout << "acc1 * acc2 = " << (acc1 * acc2).get() << endl; 
    cout << "num / acc2 = " << (num / acc2).get() << endl;
    cout << "num / acc1 = " << (num / acc1).get() << endl; 
    cout << "num * acc1 = " << (num * acc1).get() << endl; 
    cout << "num * acc2 = " << (num * acc2).get() << endl; 
    return 0;
}
