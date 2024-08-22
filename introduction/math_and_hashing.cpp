#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
#include<map>
using namespace std;
void checkPrime(int n){
    int count = 0;
    for(int i=2;i<=n;i++){
    int check =0;
    for(int j=2;j<i;j++){
        if(i%j==0){ 
            check =1;
        }        
    }
    if(check==0){
        cout<<i<<" is a prime no"<<endl;
        count++;
    }
    }
    cout<<"no of prime no is: "<<count<<endl;
}
void checkPrime2(int n){
    vector<int> prime(n+1,1);
    int count = 0;
     prime[0] = prime[1] = 0;
     for(int i = 2 ; i<=n;i++){
        if(prime[i]==1){//sieve of eratosthenes
            cout<<i<<" is a prime number"<<endl;
            count++;
            for(int j=i; j<=n; j= j+i){
                prime[j] = 0;
            }
        }
     }
     cout<<"no of prime number is: "<<count<<endl;
}
void divisor(int n){
    cout<<"the divisors are: "<<endl;
    vector<int> vc;
   
    for (int i=1; i*i<=n; i++){
        if(n%i == 0){
            vc.push_back(i);
            
            if(n/i!=i){
               int x= n/i;
                vc.push_back(x);
            }
        }
    }
    
    
    sort(vc.begin(),vc.end());
    for(auto it:vc){
        cout<<it<<" ";
    }

}
//GCD/HCF -> Highest Common factor -> factor of a number "n" is another number if you divide the "n" with  the number it will give 0 as reminder
// check modulo arithmatics from codeforces
void HCF(int n1, int n2){
    for (int i= min(n1,n2); i>=1; i-- ){// TC O(min(n1,n2)) => O(N)
        if(n1%i == 0 && n2%i==0){
            cout<<"the HCF is: "<<i<<endl;
            break;
        }
    }
}
//time complexcity of eulicidans algo is Order of log fy n log is as we are deviding in loop and fy bcoz we are deviding with random number
int HCF2(int n1, int n2){//eulicidan's algo
    while(n1>0 && n2>0){
        
        if(n1>n2){
            n1 = n1%n2;
        }
        else if(n2>n1){
            n2 = n2%n1;
        }

    }
    if(n1==0) return n2;
    return n1;
}
void hashing(int n,int arr[], char q){
   
    int hash[13] ={0};// whatever can be the maximum siz e of array take that as size of hash 
    for(int i=0; i<n; i++){
        hash[arr[i]] += 1;
    }
    while(q--){
        int number; 
        cin>>number;
        cout<<"the no of occurence of "<<number<<" in the given array is "<<hash[number]<<endl;
    }
}
void hashing_character(string s, int q){
    int hash[26] ={0};
    for(int i =0 ; i<26; i++){
        hash[s[i]-'a'] += 1;// a charater is typecasted to integer via its ASCII value
    }
    cout<<"enter your queries: "<<endl;
    while(q--){
        char query;
        cin>>query;
        cout<<"the no of occurence of "<<query<<" is: "<<hash[query - 'a'];
    }

}
//storing and fetching data from map takes log(n) time for all the cases
// unordered map takes O(1) for best and average cases and O(n) for worst cases
// worst caseo(n) for unordered is collision/infinite chaining in hashing by division method/ linear chaining
void hashing_map(int arr[], int n, char q){
    map<int,int> hash;
    for (int i =0; i<n; i++){
        hash[arr[i]] ++;
    }
    while(q--){
        int number;
        cin>>number;
        cout<<"the no of occurence of "<<number<<" in the given array is "<<hash[number]<<endl;
    }
}
int main(){
    int n1 = 48;
    int n2 =24;
    int n3, q;
    string s = "absdjkjilmkmnhabd";
    // checkPrime2(n1);
    // cout<<"the hcf is: "<<HCF2(n1,n2)<<endl;
    cin>>n3;
    int arr[n3];
    for(int i=0 ; i<n3; i++){
        cin>>arr[i];
    }
    cout<<"enter the number of elemnts do you want to query: "<<endl;
    cin>>q;
    // hashing(n3,arr,q);
    // hashing_character(s,q);
    hashing_map(arr, n3, q);
    
}