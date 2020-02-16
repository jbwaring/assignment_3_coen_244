#include "article.h"

	Article::Article(){
		startPage = -1;
		endPage = -1;
		journal_info = "Not set.";

	}

	Article::Article(string at, string tt, int idd, int yr, int st, int end, string infos):Reference(at, tt, idd, yr){
		
		startPage = st;
		endPage = end;
		journal_info = infos;
	}

	int Article::getNumberOfPages(){
		return endPage-startPage;
	}

	vector<string> Article::get_ref(){
		vector<string> ans;
		ans.push_back(this->get_author().insert(0, "Author: "));
		ans.push_back(this->get_title().insert(0, "Title: "));
		ans.push_back(to_string(this->get_year()).insert(0, "Year: "));
		ans.push_back(to_string(this->get_id()).insert(0, "Reference ID: "));
		ans.push_back(to_string(startPage).insert(0, "Start Page: "));
		ans.push_back(to_string(endPage).insert(0, "End Page: "));
		ans.push_back(journal_info.insert(0, "Journal Info: "));
		return ans;
	}