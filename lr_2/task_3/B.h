#include "A.h"

class B : public A {
protected:
    long double b;
public:
    B(long double av, long double bv) : 
        A(av), b(bv) {}
};
