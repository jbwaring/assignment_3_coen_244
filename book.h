/*
COEN 244 - ASSIGNMENT 3: Library Referencing System
WARING JEAN-BAPTISTE	40054925
FAROUQ HAMEDALLAH		40087448
*/
#include <string>
#include <iostream>
#include <vector>
#include "reference.h"
#ifndef BOOK_H
#define BOOK_H
using namespace std;

class Book: public Reference{	//Book is a derived class of Reference.

protected:
int book_length;				//Stores the number of pages of this book(type int).
string publisher;				//Stores the publisher (type string) of this reference.
long int ISBN;
public:
	Book(){};
	Book(string at, string pb, string tt, long int barcode, int yr, int length, int idd);	
	int getNumberOfPages();		//Implements the member function getNumberOfPages().
	long int getISBN();
	string get_publisher();		//Implements the memeber function related to the publisher.
	vector<string> get_ref();


};

#endif