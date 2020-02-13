#include <string>
#include <iostream>
#include <vector>
#include "reference.h"
#include "article.h"
#include "book.h"
#include "textbook.h"
using namespace std;
int main() {
	

Reference joyce_araby("James Joyce", "Araby", 12, 1914);
vector<string> ref_joyce_araby = joyce_araby.get_ref();

for(int i=0; i<4; i++)
	cout << "\n" << ref_joyce_araby[i];

cout << endl << endl;
Article a1(2, 8, "About the new Airbus A380");
cout << a1.getNumberOfPages();
a1.setRef("James Joyce", "Ara123testby", 12, 1914);
cout << endl << a1.get_title() << endl;
cout << endl << endl;
Book b1("James Joyce", "Aratestby", 943746376473, 1914, 324);
b1.setRefID(23);

cout << b1.get_id()<< endl << b1.getNumberOfPages() << endl << b1.getISBN(); 
TextBook t1("Willey", "Intro to physics", 3283294629742, 2016, 845, "www.textbook.com");	
cout << endl << endl << t1.get_title() << endl << "---------------";

vector<string> t1_infos = t1.getTextBook_vector();

for(int i=0; i<6; i++)
	cout << "\n" << t1_infos[i];

return 0;

}