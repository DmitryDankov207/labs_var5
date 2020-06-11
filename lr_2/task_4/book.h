#include<string>

using namespace std;

class Book {
protected:
    string book;
    string author;
public:
    virtual string getBook() = 0;
        
    virtual string getAuthor() = 0;
    
    virtual void setBook(string) = 0;
        
    virtual void setAuthor(string) = 0;
};
