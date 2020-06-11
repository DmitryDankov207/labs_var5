#include <math.h>
#include "B.h"

class C : public B {
    long double c;  
    long double x1;
    long double x2;  
public:    
    C(long double av, long double bv,  long double cv) : 
        B(av, bv), c(cv) {
        long double d = b*b - 4*a*c;
        
        if(d == 0)
            x1 = x2 = -b / (2*a);
        else {
            x1 = -b + sqrt(d) / (2*a);
            x2 = -x1;
        }
    }
    
    long double getX1();
    
    long double getX2();
};
