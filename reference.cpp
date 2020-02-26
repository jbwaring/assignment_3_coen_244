/*
COEN 244 - ASSIGNMENT 3: Library Referencing System
WARING JEAN-BAPTISTE	40054925
FAROUQ HAMEDALLAH		40087448
*/
#include "reference.h"
	
		Reference::Reference(){
		}

		Reference::Reference(string at, string tt, int idd, int yr){
			id = idd;
			year = yr;
			author = at;
			title  = tt;
		}
		void Reference::setRef(string at, string tt, int idd, int yr){
			id = idd;
			year = yr;
			author = at;
			title  = tt;


		}
		string Reference::get_title(){		//Returns the title.
			return title;
		}
		string Reference::get_author(){		//Returns the author.
			return author;
		}
		int Reference::get_id(){			//Returns the id.
			return id;
		}
		int Reference::get_year(){			//Returns the year.
			return year;
		}

		Reference::Reference(const Reference &ref){
				id = ref.id;
				year = ref.year;
				author = ref.author;
				title = ref.title;

		}