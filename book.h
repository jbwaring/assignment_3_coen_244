/*
COEN 244 - ASSIGNMENT 3: Library Referencing System
WARING JEAN-BAPTISTE	40054925
FAROOQ MAJD				40087448			
*/
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
string publisher;
long int ISBN;
public:
	Book(){};
	Book(string at, string pb, string tt, long int barcode, int yr, int length, int idd);
	int getNumberOfPages();
	long int getISBN();
	string get_publisher();
	vector<string> get_ref();


};

#endif