#include "ref_man.h"

ReferenceManager::ReferenceManager(int siz){

	size = siz;
}

bool ReferenceManager::add(const Reference reference){

	if(ref_vector.size()<size){
	ref_vector.push_back(reference);
	return true;
	}
	return false;
}



bool ReferenceManager::del_ref(int pos){
	if(pos>ref_vector.size()-1)
		return false;

	ref_vector.erase(ref_vector.begin()+pos);

	return true;

}

bool ReferenceManager::ref_search(int id){
	bool ans = false;
	for(int i=0; i<ref_vector.size(); i++){
		if(ref_vector[i].get_id()==id)
			ans = true;
	}

return ans;

}


int ReferenceManager::get_id(int i){
	return ref_vector[i].get_id();
}


void ReferenceManager::rank_print(){
cout << "ReferenceManager:"<< endl;
for(int i = 0; i<get_vec_size(); i++){
	cout << endl <<  "At Rank " << i << " is Reference with ID: " << get_id(i);
	}
}


void ReferenceManager::search_print(int search){
	cout << endl << "Is ID " << search << " found? ";

	if(!ref_search(search))
	cout << RED << "No." <<RESET;
else 
	cout << GREEN << "Yes." << RESET;
}

void ReferenceManager::del_print(int del){

cout << endl << "Reference with ID " << get_id(del) << " is deleted: ";
if(!del_ref(del))
	cout << RED << "No." <<RESET;
else 
	cout << GREEN << "Yes." << RESET;



}



