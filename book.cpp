/*
COEN 244 - ASSIGNMENT 3: Library Referencing System
WARING JEAN-BAPTISTE	40054925
FAROOQ MAJD				40087448			
*/
#include "book.h"

Book::Book(string at, string pb, string tt, long int barcode, int yr, int length, int idd):Reference(at, tt, idd, yr){ // Constructor used in main() instantiating an object of parent-class Reference
	ISBN = barcode; 
	publisher = pb;
	book_length = length;
}

int Book::getNumberOfPages(){ //Returns the number of pages in the book.
	return book_length;
}

long int Book::getISBN(){
	return ISBN;
}
string Book::get_publisher(){
	return publisher;
}

vector<string> Book::get_ref(){
	vector<string> ans;
	ans.push_back(get_author().insert(0, "Author: "));
	ans.push_back(publisher.insert(0, "Publisher: "));
		ans.push_back(get_title().insert(0, "Title: "));
		ans.push_back(to_string(get_year()).insert(0, "Year: "));
		ans.push_back(to_string(ISBN).insert(0, "ISBN: "));
		ans.push_back(to_string(book_length).insert(0, "Length: "));
		ans.push_back(to_string(get_id()).insert(0, "Reference ID: "));
	return ans;
}