#include<iostream>

using namespace std;
void print(int i, int n){
    if(i>n) return;
    cout<<"soham"<<endl;
    print(i+1,n);
}
void one_to_N(int n){
    if(n<1) return;
    one_to_N(n-1);
    cout<<n<<endl;//backtracking
}
void N_to_one(int n, int i){
    if(i>n) return;
    N_to_one(n,i+1);
    cout<<i<<endl;
}
void paremetrized_multiplication(int i , int multiply){// this is the formula of factorial
    if(i<1){
        cout<<multiply<<endl;
        return;
    }
    paremetrized_multiplication(i-1,multiply*i);
}
// tc O(n) nfunction calls SC O(n) nfunction takes n auxilary space in stack
int multiplication(int n){// this is the formula of factorial
    if(n<1){
        return 1;
    }
    return n*multiplication(n-1);
}
void swap(int arr[], int l, int h, int n){
    if(l>=h){
        
        cout<<"the reversed array is: "<<endl;
        for(int i = 0; i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        return;
    }
    int c;
    c= arr[l];
    arr[l]=arr[h];
    arr[h] = c;
    swap(arr, l+1, h-1,n);
}
bool palindrome(string &s, int i){
    // cout<<"inside the function"<<endl;
    if(i>=s.size()/2) return true;
    if(s[i]!=s[s.size()-(i+1)]) return false;
    return palindrome(s,i+1);
}
int fib(int n) {
        if(n==0) return 0;
        if(n==1) return 1;
        return fib(n-1) + fib(n-2);
    }
int main(){
    int n;
    int i = 0;
    // cin>>n;
    int arr[n];
    string s;
    // print(i,n);
    // one_to_N(n);
    // N_to_one(n,i);
    // paremetrized_multiplication(n,1);
    // cout<<multiplication(n)<<endl;
    /*for(int i=0;i<n;i++){
        cin>>arr[i];
  
    }
    cout<<"the initial array is: "<<endl;
    for(int i=0;i<n;i++){
        
    cout<<arr[i]<<" ";
    }
    cout<<endl;
    swap(arr,0,n-1,n);
    cout<<"array is passed by reference that;s why the original array is modified: "<<endl;
    for(int i=0;i<n;i++){        
    cout<<arr[i]<<" ";
    }*/
   
   cin>>s;
   cout<<s.size()<<endl;
   cout<<palindrome(s,0)<<endl;
   if(palindrome(s,0)){
    cout<<"the string is palindrome"<<endl;
   }else{
    cout<<"the string is not palindrome"<<endl;
   }

    return 0;
}