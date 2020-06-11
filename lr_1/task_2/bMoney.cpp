#include "bMoney.h"

bMoney::bMoney() {
    value = 0;
}

bMoney::bMoney(long double val) {
    set(val);
}

string bMoney::get() {
    return to_string(value);
}

void bMoney::set(long double val) {
    value = val > 0 ? val : 0;
}

