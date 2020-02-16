#include "book.h"

Book::Book(){
	ISBN = -1;
}
Book::Book(string at, string tt, long int barcode, int yr, int length, int idd):Reference(at, tt, idd, yr){
	ISBN = barcode;
	book_length = length;
}

int Book::getNumberOfPages(){
	return book_length;
}

void Book::setBook(string at, string tt, long int barcode, int yr, int length){
	ISBN = barcode;
	book_length = length;
}

void Book::setRefID(int ref){

	return;
}

long int Book::getISBN(){
	return ISBN;
}

vector<string> Book::get_ref(){
	vector<string> ans;
	ans.push_back(this->get_author().insert(0, "Author: "));
		ans.push_back(this->get_title().insert(0, "Title: "));
		ans.push_back(to_string(this->get_year()).insert(0, "Year: "));
		ans.push_back(to_string(ISBN).insert(0, "ISBN: "));
		ans.push_back(to_string(book_length).insert(0, "Length: "));
		ans.push_back(to_string(this->get_id()).insert(0, "Reference ID: "));
	return ans;
}