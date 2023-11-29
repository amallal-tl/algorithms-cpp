
#include <iostream>
#include <vector>

using namespace std;

void print(vector<int> vec){
    for(auto itr = vec.begin(); itr != vec.end(); itr++){
        cout << *itr << " " <<endl;
    }
}

int main()
{
    vector<int> vec;
    list<int> lst;
    vec.push_back(1);//inserting new Element
    vec.push_back(2);//inserting new Element
    //vec[0] = 10;
    
    vec.erase(vec.begin()+1);
    vec.push_back(3);
    vec.push_back(4);
    vec.insert(vec.begin() + 1, 5);
    print(vec);
}
