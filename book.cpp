

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

    string Book::getTitle() const {

    return title;
}

string Book::getAuthor() const {

return author;
}

string Book::getISBN() const {
    
return isbn;
}

bool Book::getAvailability() const {
    return isAvailable;
}



string Book::getBorrowerId() const {
    return borrowerId;
}

    //setters

    
void Book::setTitle(const string& title) {
   
   
 this->title = title;
}

void Book::setAuthor(const string& author) {

 this->author = author;
}

void Book::setISBN(const string& isbn) {
    this->isbn = isbn;
}

void Book::setAvailability(bool available) {

    isAvailable = available;
}

void Book::setBorrowerId(const string& id) {
borrowerId = id;
}


//methpde checkout
void checkOut(const string& borrowerId){

this-> isAvailable = false;
this-> borrowerId = borrowerId;}

// retour de livre
void returnBook(){
    this-> isAvailable = true;// redevient dispo
this-> borrowerId = " ";}
//tostring
string toString() const {
   
   if(isAvailable ){
    cout <<"ce livre est disponible" ;
   }
    else {
        cout << "ce livre est non - disponible ";
    }
   }
//file to format
 string toFileFormat() const{
    string format ;

    format = title + "|" + author + "|" + isbn + "|";
    if (isAvailable == true){
        format += "1";
    }
    else {
        format = format + "0";

    }
    format = format + "|" + borrowerId;
    return format
    }
 
//from file format

void fromFileFormat(const string& line){
    string donnees[5];
    int index = 0;

    for (int i = 0; i < line.length(); i++){
        if (line[i] == "|") {
            index ++;
        }
        else {
            donnees[index]= donnees[index] + line[i];

        }
        title = donnees[0];
    author = donnees[1];
    isbn = donnees[2];

    if (donnees[3] == "1") {
        isAvailable = true;
    }
    else {
        isAvailable = false;
    }

    borrowerId = donnees[4];
        }
    }
