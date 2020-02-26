/*
COEN 244 - ASSIGNMENT 3: Library Referencing System
WARING JEAN-BAPTISTE	40054925
FAROUQ HAMEDALLAH		40087448
*/
#include <string>
#include <iostream>
#include <vector>
#include "reference.h"
#include "book.h"
#ifndef TEXTBOOK_H
#define TEXTBOOK_H
using namespace std;

class TextBook: public Book {		//TextBook is a derived class of Book.
private:
	string url;						//Implements the function of getting the URL.

public:

	TextBook(string at, string pb, string tt, long int barcode, int yr, int length, string wurl, int id);
	vector<string> get_ref();
	string getURL();
	
};

#endif