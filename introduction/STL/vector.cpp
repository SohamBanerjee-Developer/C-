#include<iostream>
#include<vector>
using namespace std;
//Vectors are the same as dynamic arrays with the ability to resize themselves automatically when an element is inserted or deleted, with their storage being handled automatically by the container.
// Iterators are used to point at the memory addresses of STL containers.
// there is similar container list and DQ having all same functions as vector and two extra functions push_front and emplace_front they have lesser time complexcity for list and DQ has two more extra funtions pop_back and pop_front

int main(){
    vector<int> v;
    v.push_back(2);
    v.emplace_back(3);
    cout<<v[0]<<" "<<v.at(1)<<endl;
    vector<pair<int,int>> vec;
    vec.push_back({2,3});
    vec.emplace_back(4,5);
    cout<<vec[1].second<<endl;
    vector<int> v2(5, 10);
    vector<int> v3(10,100);
    vector<int>v4(v2);
    v4.push_back(1);
    cout<<v4[5]<<endl;
    cout<<*(v4.begin())<<endl;
    // Iterators are used to point at the memory addresses of STL containers.
    vector<int>::iterator it = v4.begin();
    it= it+5;
    cout<<*(it)<<endl;// *(variable) returns the value stored in the memory address referenced by "variable"
    v4.insert(v4.begin()+1,2,300);
    for (vector<int>::iterator it = v4.begin(); it!=v4.end(); it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;
    v4.erase(v4.begin()+1,v4.begin()+3);
    for(auto it = v4.begin(); it!=v4.end(); it++){//"auto" automically determines the datatype of the variable by identidying the type of the value 
        cout<<*(it)<<" ";
    }
    cout<<endl;
    v4.insert(v4.begin()+2,v.begin(),v.end());
    for (auto it : v4){
        cout<<it<<" ";
    }
    // v4.swap(v)swaps the element of v4 with v, v4.clear() deletes all the data, v.empty() return true if empty else false
    return 0;
}