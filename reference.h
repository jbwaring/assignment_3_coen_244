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
		vector<string> get_ref();
		void setRef(string at, string tt, int idd, int yr);
};


#endif