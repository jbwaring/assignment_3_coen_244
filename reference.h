/*
COEN 244 - ASSIGNMENT 3: Library Referencing System
WARING JEAN-BAPTISTE	40054925
FAROOQ MAJD				40087448			
*/
#include <string>
#include <iostream>
#include <vector>
#ifndef REFERENCE_H
#define REFERENCE_H
using namespace std;
class Reference{

	private:

		int id;
		int year;
		string author;
		string title;

	public:
		Reference();

		Reference(string at, string tt, int idd, int yr);
		Reference(const Reference &ref);

		string get_title();
		string get_author();
		int get_id();
		int get_year();
		virtual vector<string> get_ref(){
			vector<string> ans; return ans;
		}; //Make sure each daughter-class implements its own get_ref().
		void setRef(string at, string tt, int idd, int yr);
};


#endif