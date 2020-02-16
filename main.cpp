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

Article A1("Joyce", "Araby", 87, 1914, 2, 10, "No info available");

cout << endl << "Number of Pages in Article 1: "<<  A1.getNumberOfPages() << " pages."<<endl;


vector<string> A1_vec = A1.get_ref();
for(int i =0; i<A1_vec.size(); i++)
	cout << endl << A1_vec[i];
cout << endl << endl;
Book B1("Thomas Hardy","Far From the Madding Crowd", 983948394333213, 1856, 758, 12);
vector<string> B1_vec = B1.get_ref();
for(int i =0; i<B1_vec.size(); i++)
	cout << endl << B1_vec[i];
cout << endl << endl;
TextBook T1("Wiley","Intro to Physics", 983948394333213, 2003, 1054, "wwww.hello.com" ,10);
vector<string> T1_vec = T1.get_ref();
for(int i =0; i<T1_vec.size(); i++)
	cout << endl << T1_vec[i];
cout << "\n\n\n";

ReferenceManager R1(5); //Max Number of Ref is 10.
cout << "ReferenceManager:"<< endl;
R1.add(B1);
R1.add(T1);
R1.add(A1);
R1.add(B1);
R1.add(T1);

for(int i = 0; i<R1.get_vec_size(); i++){
	cout << endl <<  "At Rank " << i << " is Reference with ID: " << R1.get_id(i);
}

int search = 87;
cout << endl << "Is ID " << search << " found? " << R1.ref_search(search)<<endl;

int del = 2;
cout << endl << "Reference with ID " << R1.get_id(del) << " is deleted: " << R1.del_ref(del);
cout << endl << "Is ID " << search << " found? " << R1.ref_search(search)<<endl;
for(int i = 0; i<R1.get_vec_size(); i++){
	cout << endl <<  "At Rank " << i << " is Reference with ID: " << R1.get_id(i);
}
cout << endl << endl;
return 0;

}