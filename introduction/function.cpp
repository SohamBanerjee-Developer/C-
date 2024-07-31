#include<iostream>
using namespace std;
// if a function has a rtuen type it must retuen something or it will return garbage value
//pass by value: here the copy of the original number is passed and the copy is modified original number is not changed
void modify(int num){
    cout<<"pass by value"<<endl;
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
}
//pass by reference: here the address of the original number is passed and the original number is modified
// arrays are always passed by reference
void modify2(int &num){
    cout<<"pass by reference"<<endl;
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
}
int main(){
    int num = 4;
    modify(num);
    cout<<num<<endl;
    modify2(num);
    cout<<num<<endl;
    return 0;
}