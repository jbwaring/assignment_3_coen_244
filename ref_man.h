/*
COEN 244 - ASSIGNMENT 3: Library Referencing System
WARING JEAN-BAPTISTE	40054925
FAROOQ MAJD				40087448			
*/
#include <string>
#include <iostream>
#include <vector>
#include "reference.h"
#include "book.h"
#include "textbook.h"
#include "article.h"
#ifndef REF_MAN_H
#define REF_MAN_H

#define RESET   "\033[0m"
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"     /* Green */


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
	void rank_print();
	void search_print(int search);
	void del_print(int del);
};


#endif