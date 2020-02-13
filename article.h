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
	Article( int st, int end, string inf);
	int getNumberOfPages();


};




#endif