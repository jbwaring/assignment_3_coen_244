#include "reference.h"

		Reference::Reference(){
			id = -1;
			year = -1;
			author = "Author not set.";
			title  = "Title not set.";
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
		string Reference::get_title(){
			return title;
		}
		string Reference::get_author(){
			return author;
		}
		int Reference::get_id(){
			return id;
		}
		int Reference::get_year(){
			return year;
		}

		Reference::Reference(const Reference &ref){
				id = ref.id;
				year = ref.year;
				author = ref.author;
				title = ref.title;

		}