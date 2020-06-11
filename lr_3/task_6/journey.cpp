#include "journey.h"
#include <exception>

Journey::Journey() {}

Journey::Journey(string from, string to, long double cost) {
    setDep(from);
    setDest(to);
    setCost(cost);
}
    
void Journey::setDest(string dest) {
    dest.length() > 0 ?
        destination = dest : 
        throw "Destination is empty!";
}

void Journey::setDep(string dep) {
    dep.length() > 0 ?
        departure = dep : 
        throw "Departure is empty!";
}
   
void Journey::setCost(long double cost) {
    cost >= 0 ? 
        this->cost = cost : 
        throw "Invalid cost!";
}
    
string Journey::getDest() {
    return destination;
}
    
string Journey::getDep() {
    return departure;
}
    
long double Journey::getCost() {
    return cost;
}
