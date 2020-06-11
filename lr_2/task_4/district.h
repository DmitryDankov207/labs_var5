#include"book.h"

class District : public Book {
public:
    static string title;
    
    string getBook() override;
    
    string getAuthor() override;
    
    void setBook(string) override;
        
    void setAuthor(string) override;
};
