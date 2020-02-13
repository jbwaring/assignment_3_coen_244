#include "book.h"

Book::Book(){
	ISBN = -1;
	book_length = -1;
	setRef("Author not set.", "Title not set.", -1, -1);

}
Book::Book(string at, string tt, long int barcode, int yr, int length){
	ISBN = barcode;
	book_length = length;
	setRef(at,tt, -1,yr);
}

int Book::getNumberOfPages(){
	return book_length;
}

void Book::setBook(string at, string tt, long int barcode, int yr, int length){
	ISBN = barcode;
	book_length = length;
	setRef(at,tt, -1,yr);
}

void Book::setRefID(int ref){

	setRef(get_author(), get_title(), ref, get_year());
}

long int Book::getISBN(){
	return ISBN;
}