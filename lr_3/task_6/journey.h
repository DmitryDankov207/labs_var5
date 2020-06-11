#include <string>

using namespace std;

class Journey{
    string destination;
    string departure;
    long double cost;
public:
    Journey();
    
    Journey(string, string, long double);
    
    void setDest(string);
    
    void setDep(string);
    
    void setCost(long double);
    
    string getDest();
    
    string getDep();
    
    long double getCost();
};
