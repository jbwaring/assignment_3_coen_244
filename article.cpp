/*
COEN 244 - ASSIGNMENT 3: Library Referencing System
WARING JEAN-BAPTISTE	40054925
FAROUQ HAMEDALLAH		40087448
*/
#include "article.h"

	
	Article::Article(string at, string tt, int idd, int yr, int st, int end, string infos):Reference(at, tt, idd, yr){
		
		startPage = st;
		endPage = end;
		journal_info = infos;
	}

	int Article::getNumberOfPages(){		//Gets the number of pages by subtracting the last page from the first page.
		return endPage-startPage;
	}

	vector<string> Article::get_ref(){		
		vector<string> ans;
		ans.push_back(get_author().insert(0, "Author: "));
		ans.push_back(get_title().insert(0, "Title: "));
		ans.push_back(to_string(get_year()).insert(0, "Year: "));
		ans.push_back(to_string(get_id()).insert(0, "Reference ID: "));
		ans.push_back(to_string(startPage).insert(0, "Start Page: "));
		ans.push_back(to_string(endPage).insert(0, "End Page: "));
		ans.push_back(journal_info.insert(0, "Journal Info: "));
		return ans;
	}