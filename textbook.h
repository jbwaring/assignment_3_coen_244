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
	TextBook(string at, string tt, long int barcode, int yr, int length, string wurl, int id);
	vector<string> get_ref();
	string getURL();
	
};

#endif