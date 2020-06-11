#include <iostream>
#include "district.h"

using namespace std;

string District::title = "Russian literature";

int main() {
    cout <<"District: " << District::title << endl;
    District* book1 = new District();
    book1->setBook("War and Peace");
    book1->setAuthor("Leo Tolstoy");
    cout << "Book: " << book1->getBook() << endl;
    cout << "Author: " << book1->getAuthor() << endl;
    
    delete book1;
    return 0;
}
