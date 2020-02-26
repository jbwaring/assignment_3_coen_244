/*
COEN 244 - ASSIGNMENT 3: Library Referencing System
WARING JEAN-BAPTISTE	40054925
FAROUQ HAMEDALLAH		40087448
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

vector<Reference> ref_vector;			//Reference Manager has a stores refrences using a vector rather than an array for better implementations.

int size;
public:

	ReferenceManager(int size);			//ReferenceManager has one regular constructor.
	bool add(const Reference reference);//Adds a reference at the next available position and returns true, or returns false if the reference manager is full".
	bool del_ref(int pos);				//Removes the element at position of thisReferenceManagerand returns true, or returns false if pos was not a valid index.
	bool ref_search(int id);			//Return true if the reference with identifier id exists, false otherwise"
	int get_id(int i);					//Returns the identifier of the Reference object stored at position  of the ReferenceManager.
	int get_vec_size(){					//Reference Manager has size data member, which will return the number of references in the vector.
		return ref_vector.size();
	}
	void rank_print();					//Prints the Ranks the refrences linearly. 
	void search_print(int search);		//Prints the searched for ID.
	void del_print(int del);			//Prints the deleted ID.
};


#endif