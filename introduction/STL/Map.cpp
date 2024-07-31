#include <iostream>
#include <map>
#include <string>
#include <bits/stdc++.h>
using namespace std;
//map container stores key that are unique multimap allows duplicate keys both stores the keys in sorted order
int main()
{
    // Create a map of any datatype to any datatype
    map<int, int> mp;

    // Insert some values into the map
    mp[2] = 1;
    mp.insert({5,4});
    mp.emplace(1,2);

    // Get an iterator pointing to the first element in the
    // map
    map<int, int>::iterator it = mp.begin();

    // Iterate through the map and print the elements
    while (it != mp.end()) {
        cout << "Key: " << it->first
             << ", Value: " << it->second << endl;
        ++it;
    }
    cout<<mp[2]<<endl;//it return the value whose key is 1 if the given key is present it points to the adddress of end() and returns 0
    //there is also find() upper_bound() lower_boun() and all the other function of above containers
    auto a = mp.find(5);// it returns and iterator to key 5 if 5 is not present then it points to the end()
    // cout<<*a.second;

    return 0;
}