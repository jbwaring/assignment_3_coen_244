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
		vector<string> Reference::get_ref(){
			vector<string> ans; 
			ans.push_back(author);//ans[0]
			ans.push_back(title);//ans[1]
			ans.push_back(to_string(year));//ans[2]
			ans.push_back(to_string(id));//ans[3]

			return ans;
		}

		Reference::Reference(const Reference &ref){
				id = ref.id;
				year = ref.year;
				author = ref.author;
				title = ref.title;

		}