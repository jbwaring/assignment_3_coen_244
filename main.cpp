#include <string>
#include <iostream>
#include <vector>
#include "reference.h"
#include "article.h"
#include "book.h"
#include "textbook.h"
#include "ref_man.h"
using namespace std;
void println();
int main() {

Article A1("Joyce", "Araby", 87, 1914, 2, 10, "No info available");

cout << endl << "Number of Pages in Article 1: "<<  A1.getNumberOfPages() << " pages."<<endl;

println();
vector<string> A1_vec = A1.get_ref();
for(int i =0; i<A1_vec.size(); i++)
	cout << endl << A1_vec[i];
println();
Book B1("Thomas Hardy","Far From the Madding Crowd", 983948394333213, 1856, 758, 12);
Book B2("William Shakespeare", "The Tempest",  9781976805868, 1611, 243, 46);

vector<string> B1_vec = B1.get_ref();
for(int i =0; i<B1_vec.size(); i++)
	cout << endl << B1_vec[i];
println();

vector<string> B2_vec = B2.get_ref();
for(int i =0; i<B2_vec.size(); i++)
	cout << endl << B2_vec[i];
println();

TextBook T1("Wiley","Intro to Physics", 983948394333213, 2003, 1054, "wwww.hello.com" ,10);
vector<string> T1_vec = T1.get_ref();
for(int i =0; i<T1_vec.size(); i++)
	cout << endl << T1_vec[i];
println();

ReferenceManager R1(6); //Max Number of Ref is 10.

cout << "ReferenceManager:"<< endl;
R1.add(B1);
R1.add(T1);
R1.add(A1);
R1.add(B1);
R1.add(T1);
R1.add(B2);

for(int i = 0; i<R1.get_vec_size(); i++){
	cout << endl <<  "At Rank " << i << " is Reference with ID: " << R1.get_id(i);
}
println();

int search = 87;
cout << endl << "Is ID " << search << " found? " << R1.ref_search(search)<<endl;
println();
int del = 2;
cout << endl << "Reference with ID " << R1.get_id(del) << " is deleted: " << R1.del_ref(del) << endl;
println();
cout << endl << "Is ID " << search << " found? " << R1.ref_search(search)<<endl;
println();
cout << "ReferenceManager:"<< endl;
for(int i = 0; i<R1.get_vec_size(); i++){
	cout << endl <<  "At Rank " << i << " is Reference with ID: " << R1.get_id(i);
}
println();
cout << endl << endl;
return 0;

}

void println(){
	cout << endl << "══════════════════════════════════"<<endl;
}