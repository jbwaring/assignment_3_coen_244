#include "ref_man.h"

ReferenceManager::ReferenceManager(int siz){

	Reference RefMan[siz];
	size = 0;
}

bool ReferenceManager::add(const Reference reference){



	ref_vector.push_back(reference);



	return true;
}

vector<string> ReferenceManager::get_ref(int i){

return ref_vector[i].get_ref();

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