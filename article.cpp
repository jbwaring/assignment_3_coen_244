#include "article.h"

	Article::Article(){
		startPage = -1;
		endPage = -1;
		journal_info = "Not set.";

	}

	Article::Article( int st, int end, string infos){
		
		startPage = st;
		endPage = end;
		journal_info = infos;
	}

	int Article::getNumberOfPages(){
		return endPage-startPage;
	}