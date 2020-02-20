#include "textbook.h"


	TextBook::TextBook(){

		url = "void";
	}

	TextBook::TextBook(string at, string tt, long int barcode, int yr, int length, string wurl, int id):Book(at, tt, barcode, yr, length, id){
		
		url = "\e[3m\e[1;34m\033[0m";
		url.insert(11,wurl);
	}

	vector<string> TextBook::get_ref(){
		vector<string> ans;
		ans.push_back(this->get_author().insert(0, "Author: "));
		ans.push_back(this->get_title().insert(0, "Title: "));
		ans.push_back(to_string(this->get_year()).insert(0, "Year: "));
		ans.push_back(to_string(ISBN).insert(0, "ISBN: "));
		ans.push_back(to_string(book_length).insert(0, "Length: "));
		ans.push_back(to_string(this->get_id()).insert(0, "Reference ID: "));
		ans.push_back(url.insert(0, "URL: "));
		
		return ans;

	}

	string TextBook::getURL(){
		return url;
	}