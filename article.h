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

	Article();
	Article(string at, string tt, int idd, int yr, int st, int end, string inf);
	int getNumberOfPages();
	vector<string> get_ref();
	

};




#endif