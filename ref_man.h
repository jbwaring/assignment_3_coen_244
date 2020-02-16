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


class ReferenceManager: public Reference {
private:

vector<Reference> ref_vector;

int size;
public:

	ReferenceManager(int size);
	bool add(const Reference reference);
	bool del_ref(int pos);
	bool ref_search(int id);
	int get_id(int i);
	int get_vec_size(){
		return ref_vector.size();
	}

};


#endif