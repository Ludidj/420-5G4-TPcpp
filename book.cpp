#include "book.h"
using namespace std;

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