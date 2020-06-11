#include <string>

using namespace std;

class bMoney {
    long double value;
public:
    bMoney();
    
    bMoney(long double);
    
    string get();
    
    void set(long double);
    
    friend bMoney operator/(const bMoney& left, const bMoney& right);
    
    friend bMoney operator*(const bMoney& left, const bMoney& right);
    
    friend bMoney operator/(const long double& left, const bMoney& right);
    
    friend bMoney operator*(const long double& left, const bMoney& right);
};
