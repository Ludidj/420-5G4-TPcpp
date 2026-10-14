

// constructeur book
#include "book.h"
using namespace std;


Book::Book(const string& theTitle, const string& auth, const string& codeIsbn)
{
    title = theTitle;
    author = auth;
    isbn = codeIsbn;
    isAvailable = true;
    borrowerId = "";
}

//constructeur pa defaut

Book::Book()
{
    title = "";
    author = "";
    isbn="";
    isAvailable = true;
    borrowerId = "";
}

// getters et setters



//getters
public:

    int getTitle() {
        return title;

        
        }

    int getAuthor() {
        return author;

        
        }
    
    
    int getISBN() {
        return isbn;

        
        }
    bool getAvailability() {
        return isAvailable;

        
        }
    string getBorrowerId() {
        return borrowerId;

        
        }
    

        
    
