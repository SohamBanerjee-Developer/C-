#include<iostream>
#include<utility>
using namespace std;
//The pair container is a simple container defined in <utility> header consisting of two data elements or objects. 
int main(){
    pair<int, int> a = {2,3};
    cout<<a.first<<endl<<a.second<<endl;
    pair<int,pair<int, char>> b = {4,{2,'a'}};
    cout<<b.second.second<<endl;
    pair<int, int> arr[] = {{4,5},{6,5},{3,8}};
    cout<<arr[1].second<<endl;
    pair <int,string> c;
    cin>>c.first>>c.second;
    cout<<c.second<<endl;
    return 0;
}