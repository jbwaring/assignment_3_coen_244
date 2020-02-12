#include <string>
#include <iostream>
#include <vector>

using namespace std;

class Reference{

	private:

		int id;
		int year;
		string author;
		string title;

	public:
		Reference(){
			id = -1;
			year = -1;
			author = "Author not set.";
			title  = "Title not set.";
		}

		Reference(string at, string tt, int idd, int yr){
			id = idd;
			year = yr;
			author = at;
			title  = tt;
		}

		string get_title(){
			return title;
		}
		string get_author(){
			return author;
		}
		int get_id(){
			return id;
		}
		int get_year(){
			return year;
		}
		vector<string> get_ref(){
			vector<string> ans; 
			ans.push_back(author);//ans[0]
			ans.push_back(title);//ans[1]
			ans.push_back(to_string(year));//ans[2]
			ans.push_back(to_string(id));//ans[3]

			return ans;
		}
};


int main() {
	
cout << "Hello World";

Reference joyce_araby("James Joyce", "Araby", 12, 1914);
vector<string> ref_joyce_araby = joyce_araby.get_ref();

for(int i=0; i<4; i++)
	cout << "\n" << ref_joyce_araby[i];

	return 0;

}