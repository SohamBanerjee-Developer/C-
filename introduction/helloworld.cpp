
#include<bits/stdc++.h>//all libraries come under this header file
using namespace std;
int main(){
    int marks;
    cin>>marks;
   if (marks<25){
    cout<<"f";
   }
   else if ( marks<=44){//25 to 44
    cout<<"e";
   }
   else if ( marks<=49){// 45 t0 49 and so on like that
    cout<<"d";
   }
   else if ( marks<=59){
    cout<<"c";
   }
   else if ( marks<=79){
    cout<<"b";
   }
   else if ( marks<=100){
    cout<<"a";
   }
   else{
    cout<<"invalid marks"
   }
    int a =1;
    int b=2;
    int c;
    c=a;
    a=b;
    b=c;
    bool x = a==b;
    cout<<a<<" "<<b<<endl;
    cout<<x<<endl;
    return 0;
}