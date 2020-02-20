/*
COEN 244 - ASSIGNMENT 3: Library Referencing System
WARING JEAN-BAPTISTE	40054925
FAROOQ MAJD				40087448			
*/
#include <string>
#include <iostream>
#include <vector>
#include "reference.h"
#ifndef ARTICLE_H
#define ARTICLE_H
using namespace std;

class Article: public Reference {

private:
	int startPage;
	int endPage;
	string journal_info;


public:

	
	Article(string at, string tt, int idd, int yr, int st, int end, string inf);
	int getNumberOfPages();
	vector<string> get_ref();
	

};




#endif