#include <iostream>
#include <fstream>
#include "journey.h"
#define FILENAME "text.txt"


void print(const char* fileName, 
    char *argv[], int argc) {
    fstream fout(fileName);
    if(fout.is_open()) {
        for(size_t i = 1; i < argc ; i++) {
            fout << argv[i] << endl;   
        }
    }
    fout.close();
}

void showJourney() {
    Journey jr = Journey();
    try {
        jr = Journey("Minsk", "", 50.);
    }
    catch (const char* msg) {
       cout << msg << endl;
       jr = Journey("Minsk", "Moskow", 50.);
    }
    
    cout << "Journey:" << endl;
    cout << "Departure: " << jr.getDep() << endl;
    cout << "Destination: " << jr.getDest() << endl;    
    cout << "Cost: " << jr.getCost() << endl;    
}

int main(int argc, char *argv[]) {
    showJourney();
    print(FILENAME, argv, argc);
    return 0;
}
