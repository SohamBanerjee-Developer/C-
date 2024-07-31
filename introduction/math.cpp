#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
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
int main(){
    int n1 = 48;
    int n2 =24;
    // checkPrime2(n1);
    cout<<"the hcf is: "<<HCF2(n1,n2)<<endl;
    
}