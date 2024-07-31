#include<bits/stdc++.h>

using namespace std;
// set store unique elements in sorted order
int main() {
  set < int > s;
  for (int i = 10; i >= 1; i--) {
    s.insert(i);
  }
  s.insert(-2); s.insert(2);
  cout << "Elements present in the set: ";
  for (auto it = s.begin(); it != s.end(); it++) {
    cout << * it << " ";
  }
  cout << endl;
  int n = 2;
  if (s.find(2) != s.end())//find returns the address of the passed element if the element is not in the set it willreturn the address of the end() function
    cout << n << " is present in set" << endl;

  s.erase(s.begin());// you can pass value or address in erase()
  cout << "Elements after deleting the first element: ";
  for (auto it = s.begin(); it != s.end(); it++) {
    cout << * it << " ";
  }
  cout << endl;

  cout << "The size of the set is: " << s.size() << endl;

  if (s.empty() == false)
    cout << "The set is not empty " << endl;
  else
    cout << "The set is empty" << endl;
  s.clear();
  cout << "Size of the set after clearing all the elements: " << s.size()<<endl;
  cout<<"is set empty: "<<s.empty()<<endl; 
  cout<<"no of 2: "<<s.count(2)<<endl; 

}