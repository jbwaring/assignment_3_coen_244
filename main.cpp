#include <string>
#include <iostream>
#include <vector>
#include "reference.h"
#include "article.h"
#include "book.h"
#include "textbook.h"
#include "ref_man.h"
using namespace std;
int main() {
	

Reference joyce_araby("James Joyce", "Araby", 12, 1914);
Reference ref2("JB", "TOP", 24, 1999);
Reference ref3("JR", "TPPZO", 3, 2019);
Reference ref1(joyce_araby);
vector<string> ref_joyce_araby = ref1.get_ref();
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

ReferenceManager m1(3);
m1.add(joyce_araby);
m1.add(ref2);
m1.add(ref3);

vector<string> m1_vector = m1.get_ref(0);
cout << endl << "----------";
for(int i=0; i<4; i++)
	cout << "\n" << m1_vector[i];
cout << endl;
m1_vector = m1.get_ref(1);
cout << endl << "----------";
for(int i=0; i<4; i++)
	cout << "\n" << m1_vector[i];
cout << endl;
m1_vector = m1.get_ref(2);
cout << endl << "----------";
for(int i=0; i<4; i++)
	cout << "\n" << m1_vector[i];
cout << endl;



m1.del_ref(0);
m1_vector = m1.get_ref(0);
cout << endl << "----------";
for(int i=0; i<4; i++)
	cout << "\n" << m1_vector[i];
cout << endl;
cout << "Search ref:";
cout << m1.ref_search(24);
cout << endl << "ID of ref 1 is:" << m1.get_id(0);
return 0;

}