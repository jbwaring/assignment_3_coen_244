/*
COEN 244 - ASSIGNMENT 3: Library Referencing System
WARING JEAN-BAPTISTE	40054925
FAROUQ HAMEDALLAH		40087448
*/
#include <string>
#include <iostream>
#include <vector>
#include "reference.h"
#ifndef ARTICLE_H
#define ARTICLE_H
using namespace std;

class Article: public Reference {		//An Article is a derived class of Reference.

private:
	int startPage;						//StartPage and endPage(both of type int).
	int endPage;
	string journal_info;				//Stores information about the journal (type string).


public:

	
	Article(string at, string tt, int idd, int yr, int st, int end, string inf);
	int getNumberOfPages();				//Implements the additional member function int getNumberOfPages().
	vector<string> get_ref();
	

};




#endif