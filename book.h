#include <string>
#include <iostream>
#include <vector>
#include "reference.h"
#ifndef BOOK_H
#define BOOK_H
using namespace std;

class Book: public Reference{

protected:
int book_length;
long int ISBN;
public:
	Book();
	Book(string at, string tt, long int barcode, int yr, int length, int idd);
	int getNumberOfPages();
	void setBook(string at, string tt, long int barcode, int yr, int length);
	void setRefID(int ref);
	long int getISBN();
	vector<string> get_ref();


};

#endif