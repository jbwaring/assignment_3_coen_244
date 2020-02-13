#include <string>
#include <iostream>
#include <vector>
#include "reference.h"
#include "book.h"
#include "textbook.h"
#include "article.h"
#ifndef REF_MAN_H
#define REF_MAN_H
using namespace std;


class ReferenceManager: public Article, public TextBook, public Book {
private:

vector<Reference> ref_vector;

int size;
public:

	ReferenceManager(int size);
	bool add(const Reference reference);
	vector<string> get_ref(int i);
	bool del_ref(int pos);
	bool ref_search(int id);
	int get_id(int i);
};


#endif