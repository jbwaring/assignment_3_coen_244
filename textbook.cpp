/*
COEN 244 - ASSIGNMENT 3: Library Referencing System
WARING JEAN-BAPTISTE	40054925
FAROUQ HAMEDALLAH		40087448
*/
#include "textbook.h"




	TextBook::TextBook(string at, string pb, string tt, long int barcode, int yr, int length, string wurl, int id):Book(at, pb, tt, barcode, yr, length, id){
		
		url = "\e[3m\e[1;34m\033[0m";			//URL implementation.
		url.insert(11,wurl);
	}

	vector<string> TextBook::get_ref(){
		vector<string> ans;
		ans.push_back(get_author().insert(0, "Author: "));
		ans.push_back(publisher.insert(0, "Publisher: "));
		ans.push_back(get_title().insert(0, "Title: "));
		ans.push_back(to_string(get_year()).insert(0, "Year: "));
		ans.push_back(to_string(ISBN).insert(0, "ISBN: "));
		ans.push_back(to_string(book_length).insert(0, "Length: "));
		ans.push_back(to_string(get_id()).insert(0, "Reference ID: "));
		ans.push_back(url.insert(0, "URL: "));
		
		return ans;

	}

	string TextBook::getURL(){			//Returns the URL.
		return url;
	}