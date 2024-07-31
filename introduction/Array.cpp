#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cin>>arr[0]>>arr[1]>>arr[2];
    cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<" "<<arr[3];//index that has not been assigned any value will be assigned 0
    int arr2[3][5];//here 3 is the no of rows and 5 is the no of columns
    arr2[0][0]=2;
    cout<<"\n"<<arr2[0][0]<<" "<<arr2[0][1];//index that has not been assigned any value will be assigned garbage value
    return 0;
}