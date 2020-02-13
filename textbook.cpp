#include "textbook.h"


	TextBook::TextBook(){

		url = "void";
	}

	TextBook::TextBook(string at, string tt, long int barcode, int yr, int length, string wurl){
		setBook(at, tt, barcode, yr, length);
		url = wurl;
	}

	vector<string> TextBook::getTextBook_vector(){
		vector<string> ans;
		ans.push_back(get_author());//ans[0]
		ans.push_back(get_title());//ans[1]
		ans.push_back(to_string(get_year()));//ans[2]
		ans.push_back(to_string(getISBN()));//ans[3]
		ans.push_back(url);//ans[4]
		ans.push_back(to_string(get_id()));//ans[5]
		return ans;

	}

	string TextBook::getURL(){
		return url;
	}