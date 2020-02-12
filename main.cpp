#include <string>
#include <iostream>
#include <vector>
#include "reference.h"
using namespace std;
int main() {
	
cout << "Hello World";

Reference joyce_araby("James Joyce", "Araby", 12, 1914);
vector<string> ref_joyce_araby = joyce_araby.get_ref();

for(int i=0; i<4; i++)
	cout << "\n" << ref_joyce_araby[i];

	return 0;

}