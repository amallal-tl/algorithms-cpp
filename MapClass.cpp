//Create map class
//Insert
//Delete

#include <iostream>
#include <vector>

using namespace std;

// key-value pair
struct Map{
	int key;
	int value;
};

class MapClass{
	vector<Map> vMap;
	public:
	void insert(int key, int value){
		Map m = {key, value};
		vMap.push_back(m);
	}
	
	int selectValue(int key){
		for(auto itr = vMap.begin(); itr!=vMap.end(); itr++){
			if((*itr).key == key){
				return (*itr).value;
			}
		}
		return 0;
	}
	
	void deleteElement(int key){
		for(auto itr = vMap.begin(); itr!=vMap.end(); itr++){
			if((*itr).key == key){
				vMap.erase(itr);
			}
		}
	}
	
	void print(){
		for(auto itr = vMap.begin(); itr!=vMap.end(); itr++){
			cout << (*itr).key << endl;
		}
	}
};

int main(){
	MapClass m;
	m.insert(1, 10);
	m.insert(2, 20);
	m.insert(3, 30);
	cout << "Inserted following elements" << endl;
	m.print();
	//cout << "Key : "<< 3 << " : value = " << m.selectValue(3) << endl;
	m.deleteElement(2);
	cout << "After inserting above elements, we are deleting element with key " << 2 << endl;
	m.print();
	
}