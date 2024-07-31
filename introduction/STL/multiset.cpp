#include<iostream>
#include<set>
using namespace std;
//there is another stl container unordered set that stoes unique data in randomized order
int main(){
    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(2);
    ms.insert(2);
    ms.insert(2);
    for(auto it:ms){
        cout<<it<<" ";
    }
    cout<<endl;
    // ms.erase(1);//erase all 1
    for(multiset<int>::iterator it = ms.begin(); it!=ms.end(); it++){
        cout<<*it<<" ";
    }
    // ms.erase(ms.find(2));//find will return the address of the first 2 and only that element will be erased
    // ms.erase(ms.find(1), ms.find(1)+2);
    //rest all funtions are similar to set
    

    return 0;
}