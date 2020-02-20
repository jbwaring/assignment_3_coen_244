#include <string>
#include <iostream>
#include <vector>
#include "reference.h"
#include "article.h"
#include "book.h"
#include "textbook.h"
#include "ref_man.h"
using namespace std;
void println();//Prints a separator for better lisibility.
void vecPrint(vector<string> input); //Facilitates vector string sequential printing.

int main() {

Article A1("Joyce", "Araby", 87, 1914, 2, 10, "No info available"); 

cout << endl << "Number of Pages in Article 1: "<<  A1.getNumberOfPages() << " pages."<<endl;

println();
vecPrint(A1.get_ref()); // Prints properties of Article A1
println();

Book B1("Thomas Hardy","Far From the Madding Crowd", 983948394333213, 1856, 758, 12);
Book B2("William Shakespeare", "The Tempest",  9781976805868, 1611, 243, 46);

vecPrint(B1.get_ref()); // Prints properties of Book B1
println();

vecPrint(B2.get_ref()); // Prints properties of Book B2
println();

TextBook T1("Wiley","Intro to Physics", 983948394333213, 2003, 1054, "https://www.wiley.com/en-al/Introduction+to+Physics" ,10);
vecPrint(T1.get_ref()); // Prints properties of TextBook T1
println();

ReferenceManager R1(6); //Max Number of Ref is 10.
R1.add(B1);
R1.add(T1);
R1.add(A1);
R1.add(B1);
R1.add(T1);
R1.add(B2);

R1.rank_print(); // Prints the content stored in the ReferenceManager Object and their Rank No.
println();

int search = 87;
R1.search_print(search); // Prints search result for a given ID number.
println();
int del = 2;
R1.del_print(del); // Prints Deletion confirmation upon prior-existence of given ID.
println();
R1.search_print(search); // Prints search result for a given ID number (Notice it is not found anymore because we just deleted it.)
println();
R1.rank_print(); // Prints the content stored in the ReferenceManager Object and their Rank No. (-> Notice it has changed due to prior deletion.)
println();
cout << endl;

return 0;

}

void println(){
	cout << endl << "══════════════════════════════════"<<endl;
}

void vecPrint(vector<string> input){
	for(int i =0; i<input.size(); i++){
		cout << endl << input[i];
	}
	
}