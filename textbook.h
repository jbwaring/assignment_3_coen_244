#include <string>
#include <iostream>
#include <vector>
#include "reference.h"
#include "book.h"
#ifndef TEXTBOOK_H
#define TEXTBOOK_H
using namespace std;

class TextBook: public Book {
private:
	string url;

public:

	TextBook();
	TextBook(string at, string tt, long int barcode, int yr, int length, string wurl);
	vector<string> getTextBook_vector();
	string getURL();
	
};

#endif